#include "stdafx.h"
#include "SecClass.h"
#include "FetchClass.h"

using namespace ::std;
SecClass::SecClass() 
{
	
}


int SecClass::sFetch(int e) //Receives the item to find
{
	return sFetch(myArray, e); //Utilizes the other function using the implicit predefined array
}


int SecClass::sFetch(int  a[], int e ) //Receives the item to find and an array.
{
	for (int i = 0; i < sizeof(a); i++) //Searches manually through all of the items in the vector
	{
		if (a[i] == e) //until one of them matches the item its searching.
		{
			return i; //Returns the position
		}
	}
	return -1; //Returns -1 to indicate it wasn't found.
}

