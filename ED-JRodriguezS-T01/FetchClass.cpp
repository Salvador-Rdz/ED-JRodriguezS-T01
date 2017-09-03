#include "stdafx.h"
#include "FetchClass.h"
#include <iostream>
#include <stdio.h>
#include "FetchClass.h"
#include <time.h>
#include <string>

using namespace std;

FetchClass::FetchClass()
{
}
//getters and setters
void FetchClass::setArray(int a[])
{
	myArray = a;
}

int* FetchClass::getArray()
{
	return myArray;

}


int* FetchClass::RandArray(int size) //Fills this class's vector with random numbers, receives the desired size of the array
{
	int *dummy = new int[size];
	cout << "The array has been randomized" << endl;
	for (int i = 0; i<size; i++)
	{
		dummy[i] = (int)(rand() % 125 + 1); //Generates a random number and fills up every array number.
		myArray = dummy;
	}
	return dummy;
}



void FetchClass::showArray() //Prints myArray's contents.
{
	for (int i = 0; i < sizeof(myArray); i++)
	{
		cout << "[" << myArray[i] <<"]";
	}
	cout << "." << endl;
}


void FetchClass::showFetch(int position) //Prints the position of a found value.
{
	if (position != -1)
	{
		cout << "The value was found in the array position: " << position << endl;
	}
	else
	{
		cout << "The value was not found within the array" << endl;
	}
}


void FetchClass::showArray(int  a[]) //Prints some array contents.
{
	for (int i = 0; i < sizeof(a); i++)
	{
		cout << "[" << a[i] << "]";
	}
	cout << "." << endl;
}
