#pragma once
#include <iostream>
#include "FetchClass.h"
#include "SortClass.h"

using namespace std;
class BinClass :public FetchClass , public SortClass
{
public:
	BinClass();
	int bFetch(int e);
	static int bFetch(int a [], int e);
};

