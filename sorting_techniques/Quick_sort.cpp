#include <iostream>
using namespace std;

int partition_index(int arr[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high-1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low+1)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[j], arr[low]);

    return j;
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition = partition_index(arr, low, high);
        quick_sort(arr, low, partition - 1);
        quick_sort(arr, partition + 1, high);
    }
}

int main()
{
    int array[] = {10, 3, 2, 6, 4, 5, 8, 7, 9, 1};
    int n = sizeof(array)/sizeof(array[0]);

    quick_sort(array, 0, n-1);

    for(int i = 0; i < n; i ++){
        cout<<array[i]<<" ";
    }
    return 0;
}