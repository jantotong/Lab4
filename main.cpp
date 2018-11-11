#include "array.h"
#include <string>
#include <iostream>
#include <fstream>
using std::cout;
using std::cin;
using std::string;
using std::ofstream;

int main()
{
	int dobsize =0, intsize = 0, chsize = 0, stsize = 0, answer1=0;
	ofstream myfile;
	myfile.open("Output.txt");

	array<string> String(stsize);
	array<int> Int(intsize);
	array<char> Char(chsize);
	array<double> Doub(dobsize);

	do {
		cout << "Enter '1' for string, '2' for int, '3' for char, '4' for double" << endl << "Press 0 to quit" << endl;

		cin >> answer1;

		if (answer1 == 1) {
			cout << "Enter amount of string array:" << endl;
			cin >> stsize;
			if (stsize >= 32) {
				cout << "Max size is 32. Setting to 32" << endl;
				stsize = 32;
			}
			cout << "Enter value of array: " << endl;
			myfile << "Input Value: \n";
			for (int i = 0; i < stsize; i++) {
				string value="";
				cin >> value;
				String.setArray(i, value);
				myfile << String.myarray[i] << endl;
			}
		}

		else if (answer1 == 2) {
			cout << "Enter amount of int array:" << endl;
			cin >> intsize;

			if (intsize >= 32) {
				cout << "Max size is 32. Setting to 32" << endl;
				intsize = 32;
			}

			cout << "Enter value of array: " << endl;
			myfile << "Input Value: \n";
			for (int i = 0; i < intsize; i++) {
				int value = 0;
				cin >> value;
				Int.setArray(i, value);
				myfile << Int.myarray[i] << endl;
			}

		}

		else if (answer1 == 3) {
			cout << "Enter amount of char array:" << endl;
			cin >> chsize;
			if (chsize >= 32) {
				cout << "Max size is 32. Setting to 32" << endl;
				chsize = 32;
			}
			cout << "Enter value of array: " << endl;
			myfile << "Input Value: \n";
			for (int i = 0; i < chsize; i++) {
				char value = 0;
				cin >> value;
				Char.setArray(i, value);
				myfile << Char.myarray[i] << endl;
			}
		}

		if (answer1 == 4) {
			cout << "Enter amount of double array:" << endl;
			cin >> dobsize;
			cin >> dobsize;
			if (dobsize >= 32) {
				cout << "Max size is 32. Setting to 32" << endl;
				dobsize = 32;
			}
			cout << "Enter value of array: " << endl;
			myfile << "Input Value: \n";
			for (int i = 0; i < dobsize; i++) {
				double value = 0;
				cin >> value;
				Doub.setArray(i, value);
				myfile << Doub.myarray[i] << endl;
			}
		}

		else if (answer1 == 0) {
			cout << "Quitting" << endl;
		}

		else {
		}

	} while (answer1 != 0);

	myfile.close();
	system("pause");
	return 0;
}
