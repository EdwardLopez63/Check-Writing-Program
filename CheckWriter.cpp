/* Check Writing Program -Extra Credit
Create a Check Writing program which prompts for and accepts a three - digit integer,
then writes that number out in words.Use switches to accomplish it in addition to
the other structures you have learned.Keep in mind that teens are a special case and think
about how you might handle a zero in the ones or tens place.
Example runs :
Please type in the amount of your check : 237
Two hundred thirty - seven
Please type in the amount of your check : 506
Five hundred six
Please type in the amount of your check : 913
Nine hundred thirteen

By Edward Lopez
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

	int userNumber = 0;								// the input from the user is stored here
	int
		hundredsNum,								// 3 INT varibles used later to store the digits from the users response
		tensNum,
		onesNum;

	string											// 3 STRING variables used later to store switch case output values
		hundredsString = "",						// they will help to figure out what to concatenate(combine), especially if the tens or hundredths is a 0
		tensString = "",
		onesString = "";

	cout << "Let me know of a number and I can put it in check form!" << endl;
	cout << "Enter your number: " << endl;
	cin >> userNumber;								// stores input

	/* NUMBER SLITTER*/								// EXAMPLE-- Input : 250 --- RESULTS EXPLAINED BELOW
	onesNum = userNumber % 10;						// stores the number in the 1's place into onesNum			stores 0
	tensNum = userNumber / 10 % 10;					// stores the number in the 10's place into tensNum			stores 5
	hundredsNum = userNumber / 100 % 10;			// stores the number in the 100's place into hundredsNum	stores 2


	/* HUNDREDTHS PLACE OUTPUT */
	switch (hundredsNum) {							// overall output will be (hundredsString + tensString + onesString). They hold empty strings values just incase
													// if there is no value of one. EX: 100. Uses only the hundredsString but still 'outputs' the empty string of tensString and oneString
	case(1) :
		hundredsString = "One-hundred ";			// extra space in string to connect with tensString and oneString
		cout << hundredsString;
		break;
	case(2) :
		hundredsString = "Two-hundred ";			
		cout << hundredsString;
		break;
	case(3) :										// random example: Input 357. The 3 in the hundreds place will output Three-hundred
		hundredsString = "Three-hundred ";			
		cout << hundredsString;
		break;
	case(4) :
		hundredsString = "Four-hundred ";			// stores unique string value in previous created string variable
		cout << hundredsString;
		break;
	case(5) :
		hundredsString = "Five-hundred ";
		cout << hundredsString;
		break;
	case(6) :
		hundredsString = "Six-hundred ";
		cout << hundredsString;
		break;
	case(7) :
		hundredsString = "Seven-hundred ";
		cout << hundredsString;
		break;
	case(8) :
		hundredsString = "Eight-hundred ";
		cout << hundredsString;
		break;
	case(9) :
		hundredsString = "Nine-hundred ";
		cout << hundredsString;
		break;
	default:
		break;											//  if there is a 0 in the hundredths place--outputs nothing

	}



	/* TEEN CHECKER/ TENS OUTPUT */						// compares the tens and ones number if 1 or 0 or else.
	if (tensNum == 1) {									// if teen number, do this

		switch (onesNum) {								// tens place is 1 for sure now. Now compares the digit in the ones place to figure out the output
		case(0) :
			tensString = "ten ";
			cout << tensString << endl;
			break;
		case(1) :
			tensString = "eleven ";						// if tens number = 1, then the onesString won't have an actual value
			cout << tensString << endl;					// the whole TEEN value is stored into the tens for convenience 
			break;
		case(2) :
			tensString = "twelve ";
			cout << tensString << endl;
			break;
		case(3) :
			tensString = "thirteen ";
			cout << tensString << endl;
			break;
		case(4) :
			tensString = "fourteen ";
			cout << tensString << endl;
			break;
		case(5) :
			tensString = "fifteen ";
			cout << tensString << endl;
			break;
		case(6) :
			tensString = "sixteen ";
			cout << tensString << endl;
			break;
		case(7) :
			tensString = "seventeen ";
			cout << tensString << endl;
			break;
		case(8) :
			tensString = "eighteen ";
			cout << tensString << endl;
			break;
		case(9) :
			tensString = "nineteen ";
			cout << tensString << endl;
			break;

		}

	} 


	/* TENS OUTPUT */

	if (tensNum >= 2 && tensNum <= 9) {					// if 2-9. Example if 357, it will use this block of IF code. Based on the 5 in the input.

		switch (tensNum) {

		case(2) :
			tensString = "twenty ";
			cout << tensString;
			break;
		case(3) :
			tensString = "thirty ";						// space in every string to correct to possible onesNumber
			cout << tensString;
			break;
		case(4) :
			tensString = "forty ";
			cout << tensString;
			break;
		case(5) :
			tensString = "fifty ";
			cout << tensString;
			break;
		case(6) :
			tensString = "sixty ";
			cout << tensString;
			break;
		case(7) :
			tensString = "seventy ";
			cout << tensString;
			break;
		case(8) :
			tensString = "eighty ";
			cout << tensString;
			break;
		case(9) :
			tensString = "ninety ";
			cout << tensString;
			break;

		}


		/* ONES OUTPUT*/								// outputs the results for the onesNum 
		switch (onesNum) {
		case(1) :
			onesString = "one";
			cout << onesString << endl;
			break;
		case(2) :
			onesString = "two";
			cout << onesString << endl;
			break;
		case(3) :
			onesString = "three";
			cout << onesString << endl;
			break;
		case(4) :
			onesString = "four";
			cout << onesString << endl;
			break;
		case(5) :
			onesString = "five";
			cout << onesString << endl;
			break;
		case(6) :
			onesString = "six";
			cout << onesString << endl;
			break;
		case(7) :
			onesString = "seven";
			cout << onesString << endl;
			break;
		case(8) :
			onesString = "eight";
			cout << onesString << endl;
			break;
		case(9) :
			onesString = "nine";
			cout << onesString << endl;
			break;

		}


	}

	if (hundredsNum == 0 && tensNum == 0 && onesNum == 0) {						// checks if all numbers are 0. If someone inputs 0, 00, or 000.

		onesString = "Zero";
		cout << onesString << endl;

	}


	cout << "Run the program again if you have another number you want in words!" << endl;

	system("pause");
	return 0;

}
