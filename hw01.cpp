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
	cin >> choice;
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

	// Part e

	// Part f

	// Part g

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

void selectionSort(int arr[], int size){
	int index = 0;
	int temp = 0;
	for(int i = 0; i < 100; i++){
		int min = 1000000000;
		for(int j = i; j< 100; j++){
			if(arr[j] < min){
				min = arr[j];
				index = j;
			}else{}
		}
		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}
