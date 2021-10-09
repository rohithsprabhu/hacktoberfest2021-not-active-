#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
int main()
{
	int arr[] = { 8, 2, 3, 9, 1,11 };
	int n = sizeof(arr) / sizeof(arr[0]);

	insertionSort(arr, n);
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}
