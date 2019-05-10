/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/
int isOlder(char *dob1, char *dob2) {
	int day1, month1, year1, day2, year2, month2;
	sscanf(dob1, "%d-%d-%d", &day1, &month1, &year1);
	sscanf(dob2, "%d-%d-%d", &day2, &month2, &year2);
	if (year1 % 400 != 0 && month1 == 2 && day1 > 28)
		return -1;
	else if (month1 == 2 && day1 > 29)
		return -1;
	if (year2 % 400 != 0 && month2 == 2 && day2 > 28)
		return-1;
	else if (month2 == 2 && day2 > 29)
		return -1;
	if (month1>12 || month2>12 || day1>31 || day2>31 || month1 <= 0 || month2 <= 0 || day1 <= 0 || day2 <= 0 || year1 <= 0 || year2 <= 0)
		return -1;
	if (year1 == year2&&month1 == month2&&day1 == day2)
		return 0;
	if (year1<year2)
		return 1;
	else
		return 2;
	if (month1<month2)
		return 1;
	else
		return 2;
	if (day1<day2)
		return 1;
	else
		return 2;
}