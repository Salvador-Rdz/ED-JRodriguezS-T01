// ED-JRodriguezS-T01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SecClass.h"
#include "BinClass.h"
#include "SortClass.h"
using namespace std;

int main()
{
	int testArray[4] = { 1,2,3,4 };
	SecClass test =  SecClass();
	test.setArray(test.RandArray(5));
	test.showArray();
	test.showFetch(test.sFetch(1));
	BinClass test2 = BinClass();
	test2.setArray(testArray);
	test2.showArray();
	test2.showFetch(test2.bFetch(45));
    return 0;
}

