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

	void quickSort(T arr[], T low, T high)
	{
		if (low < high)
		{

			T parttemp = partition(arr, low, high);
			quickSort(arr, low, parttemp - 1);
			quickSort(arr, parttemp + 1, high);
		}
	}


// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
	void merge(T arr[], int l, int m, int r)
	{
		int i, j, k;
		int n1 = m - l + 1;
		int n2 = r - m;

		/* create temp arrays */
		 T L[32];
		 T R[32];

		/* Copy data to temp arrays L[] and R[] */
		for (i = 0; i < n1; i++)
			L[i] = arr[l + i];
		for (j = 0; j < n2; j++)
			R[j] = arr[m + 1 + j];

		/* Merge the temp arrays back into arr[l..r]*/
		i = 0; // Initial index of first subarray 
		j = 0; // Initial index of second subarray 
		k = l; // Initial index of merged subarray 
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

		/* Copy the remaining elements of L[], if there
		   are any */
		while (i < n1)
		{
			arr[k] = L[i];
			i++;
			k++;
		}

		/* Copy the remaining elements of R[], if there
		   are any */
		while (j < n2)
		{
			arr[k] = R[j];
			j++;
			k++;
		}
	}

	/* l is for left index and r is right index of the
	   sub-array of arr to be sorted */
	void mergeSort(T arr[], int l, int r)
	{
		if (l < r)
		{
			// Same as (l+r)/2, but avoids overflow for 
			// large l and h 
			int m = l + (r - l) / 2;

			// Sort first and second halves 
			mergeSort(arr, l, m);
			mergeSort(arr, m + 1, r);

			merge(arr, l, m, r);
		}
	}

};

#endif
