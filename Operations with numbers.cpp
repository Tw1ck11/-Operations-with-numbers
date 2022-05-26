// Operations with numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

///Task 1
	string whatIsIt(char sym) {
		if (isdigit(sym)) {
			return "Number";
		}
		else if (isalpha(sym)) {
			if (isupper(sym))
			{
				return "Capital letter";
			}
			return "Letter";
		}
		else {
			return "punctuation mark";
		}
	}

	int main()
	{

		char symbol;

		cout << "Enter sumbol: ";
		cin >> symbol;

		cout << symbol << " - This is " << whatIsIt(symbol) << "\n";




		////Task 2
		bool isDivBy357(int num) {
			return (num % 3 == 0
				&& num % 5 == 0
				&& num % 7 == 0) ? true : false;
		}

		int main()
		{

			int num;

			cout << "Enter number: ";
			cin >> num;

			cout << boolalpha << "Number divisible by 3,5,7 at the same time - " << isDivBy357(num) << "\n";



			/////Task 3
			int howMuchNumbers(int num) {
				int k = 0;
				while (num > 0)
				{
					num /= 10;
					k++;
				}
				return k;
			}

			int main()
			{

				int num;

				cout << "Enter number (integer, any): ";
				cin >> num;

				cout << "In number " << num << " - " << howMuchNumbers(num) << " numbers\n";
			}





			//////Task 4
			string isPalindrome(string str1) {
				for (int i = 0; i < str1.length(); i++) {
					if (str1[i] == ' ') str1.erase(i, 1);
				}
				string str2 = str1;
				reverse(str2.begin(), str2.end());
				return (str1 == str2) ? "It's a palindrome" : "It's not a palindrome";
			}

			int main()
			{

				string str;

				cout << "Enter a word or number: ";
				getline(cin, str);

				cout << str << " - " << isPalindrome(str) << "\n";
			}




			/////Task 5 
			string isInSquare(double x, double y, double begin_x, double begin_y, double end_x, double end_y) {
				if ((x >= begin_x && x <= end_x) && (y >= begin_y && y <= end_y))
				{
					return"in a rectangle";
				}
				else
				{
					return "Not in a rectangle";
				}
			}

			int main()
			{

				setlocale(0, "rus");

				double begin_x;
				double begin_y;

				double end_x;
				double end_y;

				double x;
				double y;

				cout << "Enter X, Y upper left corner of the rectangle :\n";
				cout << "X: ";
				cin >> begin_x;
				cout << "Y: ";
				cin >> begin_y;

				cout << "Enter X, Y lower right corner of the rectangle :\n";
				cout << "X: ";
				cin >> end_x;
				cout << "Y: ";
				cin >> end_y;

				cout << "Enter X, Y point coordinates:\n";
				cout << "X: ";
				cin >> x;
				cout << "Y: ";
				cin >> y;

				cout << "Point " << "(" << x << ";" << y << ")"
					<< " - " << isInSquare(x, y, begin_x, begin_y, end_x, end_y) << "\n";
			}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}



