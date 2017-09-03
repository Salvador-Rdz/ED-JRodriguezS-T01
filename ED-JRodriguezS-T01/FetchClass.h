#pragma once
class FetchClass
{
	public:
		FetchClass();
		virtual void setArray(int a []);
		virtual int *getArray();
		virtual void showArray();
		virtual void showFetch(int position);
		virtual void showArray(int  a[]);
	public:
		int *myArray;
		virtual int *RandArray(int size);
};

