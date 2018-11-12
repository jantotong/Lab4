#ifndef Array_h
#define Array_h
#include <iostream>
using std::cout;
using std::endl;

template< typename T > class array {
private:
	int size;

public:
	T *myarray;

	array(int s) {
		size = s;
		myarray = new T[size];
	}

	void setArray(int elem, T val) {
		myarray[elem] = val;
	}

	T getArray() {
		return *myarray;
	}

	void InsertionSort(T arr[], int n) {
		if (n <= 1) {
			return;
		}

		InsertionSort(arr, n - 1);


		int last = arr[n - 1];
		int j = n - 2;

		while (j >= 0 && arr[j] > last)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = last;
	}

	void swap(T* a, T* b)
	{
		T t = *a;
		*a = *b;
		*b = t;
	}

	T partition(T arr[], int low, int high)
	{
		T pivot = arr[high];   
		int i = (low - 1); 

		for (int j = low; j <= high - 1; j++)
		{
			if (arr[j] <= pivot)
			{
				i++;   
				swap(&arr[i], &arr[j]);
			}
		}
		swap(&arr[i + 1], &arr[high]);
		return (i + 1);
	}

	void QuickSort(T arr[], T low, T high)
	{
		if (low < high)
		{

			T parttemp = partition(arr, low, high);
			QuickSort(arr, low, parttemp - 1);
			QuickSort(arr, parttemp + 1, high);
		}
	}

	void merge(T arr[], int l, int m, int r)
	{
		int i, j, k;
		int n1 = m - l + 1;
		int n2 = r - m;

		 T L[32];
		 T R[32];

		for (i = 0; i < n1; i++)
			L[i] = arr[l + i];
		for (j = 0; j < n2; j++)
			R[j] = arr[m + 1 + j];

		i = 0; 
		j = 0;
		k = l;  
		while (i < n1 && j < n2)
		{
			if (L[i] <= R[j])
			{
				arr[k] = L[i];
				i++;
			}
			else
			{
				arr[k] = R[j];
				j++;
			}
			k++;
		}

		while (i < n1)
		{
			arr[k] = L[i];
			i++;
			k++;
		}

		while (j < n2)
		{
			arr[k] = R[j];
			j++;
			k++;
		}
	}

	void MergeSort(T arr[], int l, int r)
	{
		if (l < r)
		{
			int m = l + (r - l) / 2;

			MergeSort(arr, l, m);
			MergeSort(arr, m + 1, r);

			merge(arr, l, m, r);
		}
	}

};

#endif
