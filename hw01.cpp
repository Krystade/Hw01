//============================================================================
// Name        : hw01.cpp
// Author      : Jack Schmid
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "hw01.h"

int main() {
	// Part a
	int digitone = rand() % 10;
	int digittwo = rand() % 10;
	int digitthree = rand() % 10;
	int num = digitone*100 + digittwo*10 + digitthree;
	cout << "Your random number is: " << digitone << digittwo << digitthree << endl;
	cout << "1. Sum the digits" << endl << "2. Triple the number" << endl << "3. Reverse the digits" << endl;
	int choice;
	//cin >> choice;
	choice = 1;
	switch(choice){
		case 1:
			cout << "The digits summed equals " << digitone + digittwo + digitthree << endl;

			break;
		case 2:
			cout << "The number tripled equals " << num*3 << endl;
			break;
		case 3:
			cout << "The number with reversed digits equals " << digitthree * 100 + digittwo* 10 + digitone << endl;
			break;
		default:
			cout << "Please enter a valid choice" << endl;
	}

	// Part b
	enum season{
		Spring, Summer, Fall, Winter
	};
	season currentSeason = Winter;

	typedef int integer;
	integer test = 10;

	string name = "Jack";

	cout << "Season: " << currentSeason << endl << "Test int: " << test << endl << "Test string: " << name << endl;
	// Part c
	int randomInts[10];
	for(int i = 0; i < 10; i++){
		randomInts[i] = rand()%100;
		cout << "Random int " << i << " is " << randomInts[i] << endl;
	}
	// Part d
	cout << "Sort with insertion sort method" << endl;
	insertionSort(randomInts, 10);
	// Part e
	cout << "Write array to file arrayFile.txt\n";
	ofstream oFile;
	oFile.open("arrayFile.txt");
	for(int i = 0; i < 10; i++){
		oFile << randomInts[i] << ", ";
	}
	oFile.close();
	// Part f
	cout << "Reading from file\n";
	string line;
	ifstream iFile("arrayFile.txt");
	while(getline(iFile, line)){
		cout << line << '\n';
	}
	// Part g
	cout << "Printing array" << endl;
	printArr(randomInts, 10);
	return 0;
}

void printArr(int arr[], int size){
	for(int i = 0; i < size; i++){
		if(i != size-1){
			cout << arr[i] << ", ";
		}else{
			cout << arr[i] << endl;
		}
	}
}

void insertionSort(int arr[], int size){
	int temp;
	for(int i = 1; i < size; i++){
		for(int j = 0; j < i; j++){
			if(arr[i] < arr[j]){
				temp = arr[i];
				for(int k = i; k > j; k--){
					arr[k] = arr[k - 1];
				}
				arr[j] = temp;
				break;
			}
		}
	}
}
