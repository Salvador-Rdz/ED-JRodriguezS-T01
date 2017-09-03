#include "stdafx.h"
#include "SortClass.h"


SortClass::SortClass()
{

}



void SortClass::selection(int  a[]) //Sorts the values in an array using the selection algorithm
{
	for (int i = 0; i < sizeof(a) - 1; i++)
	{
		int m = i;
		for (int j = i + 1; j < sizeof(a); j++)
		{
			if (a[j] < a[m]) //checks if the lowest index is equal to the next index
			{
				m = j;
			}
		}
		//updates the array values
		int tmp = a[i];
		a[i] = a[m];
		a[m] = tmp;
	}
}


void SortClass::insertion(int  a[]) //Sorts the values in an array using the insertion algorithm
{
	int tmp;
	int j = 0;
	int arr_size = sizeof(a) / sizeof(a[0]);
	for (int i = 1; i< arr_size; i++)
	{
		tmp = a[i];
		i--;
		while ((j >= 0) && (a[j]>tmp)) //moves throughout the index backwards while checking if the current value is higher than the vector of reference
		{
			a[j + 1] = a[j]; //Swaps the values on the left with the ones on the right
			j--;
		}
		a[j + 1] = tmp;
	}
}


void SortClass::bubble(int  a[]) //Sorts the values in an array using the bubble algorithm
{
	int arr_size = sizeof(a) / sizeof(a[0]);
	for (int i = 0;  i < arr_size-1; i++)
	{
		for (int j = 0; j < arr_size - i - 1; j++)
		{
			if (a[j + 1] < a[j]) //checks if the next value is smaller than the current value
			{
				int tmp = a[j+1];
				a[j+1] = a[j];
				a[j] = tmp;
			}
		}
	}
}


void SortClass::quickSort(int  a[], int inti, int intf) //Sorts the values in an array using the quicksort algorithm
{
	int i, j, pivot;
	int arr_size = sizeof(a) / sizeof(a[0]);
	i = inti; j = intf;
	pivot = a[inti];
	do //while the start and end don't cross
	{
		//Moves throughout the vector comparing the values with the pivot, moving one by one, forwards or backwards
		while (a[i] <= pivot && i<j)
		{
			i++;
		}
		while (a[j]>pivot)
		{
			j--;
		}
		if (i<j)
		{
			int tmp = a[j];
			a[j] = a[i];
			a[i] = tmp;
			i++; j--;
		}
	} while (i <= j);
	a[inti] = a[j];
	a[j] = pivot;
	//Uses recursivity to sort all of the values set by set
	if (inti<j - 1)
	{
		quickSort(a,inti, j - 1);
	}
	if (i < intf)
	{
		quickSort(a,j + 1, intf);
	}
}


void SortClass::mergeSort(int  a[], int ini, int fin) //Sorts the values in an array using the mergesort algorithm
{
	if (fin - ini == 0 || fin - ini == 1) //if the current evaluated list is of size 0 or 1, it means its already sorted.
	{

	}
	else
	{
		int pivot = (ini + fin) / 2;
		mergeSort(a,ini, pivot);
		mergeSort(a,pivot, fin);
		int p1 = ini;
		int p2 = pivot;
		int p3 = 0;
		//an auxiliary array is created to save the in-order lists.
		int size = fin - ini;
		int *auxList = new int[size];
		//Moves throughout the pivots and points, while checking the value of each point.
		while (p1<pivot || p2<fin)
		{
			if (p1<pivot && p2<fin)
			{
				if (a[p3++]<a[p2++])
				{
					auxList[p3++] = a[p1++]; //In case they're smaller, they're swapped. 
				}
				else
				{
					auxList[p3++] = a[p2++];
				}
			}
			else if (p1<pivot)
			{
				auxList[p3++] = auxList[p1++];
			}
			else
			{
				auxList[p3++] = auxList[p2++];
			}
		}
		for (int i = 0; i<fin - ini; i++)
		{
			a[ini + i] = auxList[i];
		}
	}
}

