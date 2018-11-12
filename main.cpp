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
			string temp[32];
			for (int i = 0; i < stsize; i++) {
				string value = "";
				cin >> value;
				String.setArray(i, value);
				myfile << String.myarray[i] << endl;
				temp[i] = String.myarray[i];
			}
			/*
			
			String.InsertionSort(temp, stsize);
			for (int i = 0; i < stsize; i++) {
				String.myarray[i] = temp[i];
			}

			myfile << "Recursive Insertion Sort: \n";
			cout << "Recursive Insertion Sort: " << endl;
			for (int i = stsize - 1; i >= 0; i--) {
				cout << String.myarray[i] << endl;
				myfile << String.myarray[i] << endl;
			}
			
			String.QuickSort(temp, String.myarray[0], String.myarray[intsize-1]);

			myfile << "Recursive Quick Sort: \n";
			cout << "Recursive Quick Sort: \n";

			for (int i = stsize - 1; i >= 0; i--) {
				cout << String.myarray[i] << endl;
				myfile << String.myarray[i] << endl;
			}

			String.MergeSort(temp, 0, chsize - 1);

			myfile << "Recursive Merge Sort: \n";
			cout << "Recursive Merge Sort: \n";

			for (int i = stsize - 1; i >= 0; i--) {
				cout << String.myarray[i] << endl;
				myfile << String.myarray[i] << endl;
			}
			*/
			
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
			int temp[32];
			for (int i = 0; i < intsize; i++) {
				int value = 0;
				cin >> value;
				Int.setArray(i, value);
				myfile << Int.myarray[i] << endl;
				temp[i] = Int.myarray[i];
			}
			Int.InsertionSort(temp, intsize);

			for (int i = 0; i < intsize; i++) {
				Int.myarray[i] = temp[i];
			}

			myfile << "Recursive Insertion Sort: \n";
			cout << "Recursive Insertion Sort: " << endl;
			for (int i = intsize-1; i >= 0; i--) {
				cout << Int.myarray[i] << endl;
				myfile << Int.myarray[i] << endl;
			}
			
			Int.QuickSort(temp, Int.myarray[0], Int.myarray[intsize-1]);

			myfile << "Recursive Quick Sort: \n";
			cout << "Recursive Quick Sort: \n";

			for (int i = intsize-1; i >= 0; i--) {
				cout << Int.myarray[i] << endl;
				myfile << Int.myarray[i] << endl;
			}

			Int.MergeSort( temp, 0, intsize - 1);

			myfile << "Recursive Merge Sort: \n";
			cout << "Recursive Merge Sort: \n";

			for (int i = intsize - 1; i >= 0; i--) {
				cout << Int.myarray[i] << endl;
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
			char temp [32];
			for (int i = 0; i < chsize; i++) {
				char value = 0;
				cin >> value;
				Char.setArray(i, value);
				myfile << Char.myarray[i] << endl;
				temp[i] = Char.myarray[i];
			}
			Char.InsertionSort(temp, chsize);

			for (int i = chsize - 1; i >= 0; i--) {
				Char.myarray[i] = temp[i];
			}

			myfile << "Recursive Insertion Sort: \n";
			cout << "Recursive Insertion Sort: " << endl;
			for (int i = chsize - 1; i >= 0; i--) {
				cout << Char.myarray[i] << endl;
				myfile << Char.myarray[i] << endl;
			}

			Char.QuickSort(temp, Char.myarray[0], Char.myarray[chsize - 1]);

			myfile << "Recursive Quick Sort: \n";
			cout << "Recursive Quick Sort: \n";

			for (int i = 0; i < chsize; i++) {
				cout << Char.myarray[i] << endl;
				myfile << Char.myarray[i] << endl;
			}

			Char.MergeSort(temp, 0, chsize - 1);

			myfile << "Recursive Merge Sort: \n";
			cout << "Recursive Merge Sort: \n";

			for (int i = chsize - 1; i >= 0; i--) {
				cout << Char.myarray[i] << endl;
				myfile << Char.myarray[i] << endl;
			}
		}

		else if (answer1 == 4) {
			cout << "Enter amount of double array:" << endl;
			cin >> dobsize;
			if (dobsize >= 32) {
				cout << "Max size is 32. Setting to 32" << endl;
				dobsize = 32;
			}
			cout << "Enter value of array: " << endl;
			myfile << "Input Value: \n";
			double temp[32];
			for (int i = 0; i < dobsize; i++) {
				double value = 0;
				cin >> value;
				Doub.setArray(i, value);
				myfile << Doub.myarray[i] << endl;
				temp[i] = Doub.myarray[i];
			}
			Doub.InsertionSort(temp, dobsize);

			for (int i = 0; i < dobsize; i++) {
				Doub.myarray[i] = temp[i];
			}

			myfile << "Recursive Insertion Sort: \n";
			cout << "Recursive Insertion Sort: " << endl;
			for (int i = dobsize - 1; i >= 0; i--) {
				cout << Doub.myarray[i] << endl;
				myfile << Doub.myarray[i] << endl;
			}

			Doub.QuickSort(temp, Doub.myarray[0], Doub.myarray[dobsize - 1]);

			myfile << "Recursive Quick Sort: \n";
			cout << "Recursive Quick Sort: \n";

			for (int i = dobsize - 1; i >= 0; i--) {
				cout << Doub.myarray[i] << endl;
				myfile << Doub.myarray[i] << endl;
			}

			Doub.MergeSort(temp, 0, dobsize - 1);

			myfile << "Recursive Merge Sort: \n";
			cout << "Recursive Merge Sort: \n";

			for (int i = dobsize - 1; i >= 0; i--) {
				cout << Doub.myarray[i] << endl;
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
	return 0;
}
