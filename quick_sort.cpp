#include <iostream>

using namespace std;


int partition1(int a[],int l,int r)
{
    int j,pivot;
    pivot=a[r];
    int i=l-1;
    for(j=l;j<r;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

void quicksort(int a[],int l,int r)
{
    if(l<r)
    {
        int pi=partition1(a,l,r);
        quicksort(a,l,pi-1);
        quicksort(a,pi+1,r);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
   int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, 0, n - 1);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}
