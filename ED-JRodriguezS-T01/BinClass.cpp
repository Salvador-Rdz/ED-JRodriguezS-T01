#include "stdafx.h"
#include "BinClass.h"
#include "FetchClass.h"
#include "SortClass.h"
#include <cstdlib>
using namespace std;


BinClass::BinClass()
{

}

int BinClass::bFetch(int e)
{
	return bFetch(myArray, e);
}


int BinClass::bFetch(int a [], int e)
{
	SortClass sort;
	bool flag=false;
	std::cin.clear();
	int ans=0;
	cout << "Which method do you want to use for sorting?" << endl;
	cout << "(1) selection" << endl;
	cout << "(2) insertion" << endl;
	cout << "(3) bubble" << endl;
	cout << "(4) quickSort" << endl;
	cout << "(5) mergeSort" << endl;
	cout << "Press anything else to go to search" << endl;
	cin >> ans;
	switch (ans)
	{
	case 1:
		sort.selection(a);
		break;
	case 2:
		sort.insertion(a);
		break;
	case 3:
		sort.bubble(a);
		break;
	case 4:
		sort.quickSort(a, 0, sizeof(a));
		break;
	case 5:
		sort.mergeSort(a, 0, sizeof(a));
		break;
	default:
		break;
	}
	//Variables
	int sta, mid, end;
	int midValue;
	sta = 0; end = sizeof(a) / sizeof(a[0]);
	mid = (sta + end) / 2;
	//While the starting value of the setup is lower than the final position of the vector
	while (sta < end)
	{
		midValue = a[mid]; //Gets the current value of the center of the vector
		if (midValue == e) //Checks if
		{
			return mid;
		}
		else
		{
			if (e < midValue)
			{
				end = mid;
				mid = (sta + end) / 2;
			}
			else
			{
				sta = mid;
				mid = (sta + end) / 2;
			}
		}
	}
	return -1;
}
