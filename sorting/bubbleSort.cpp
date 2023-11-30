#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped = false;
    for (int i = 0; i < n-1; i++)   // for round 0 to n-1
    {
        for (int j = 0; j < n-i; j++)
        {
            // process element till n-i th index
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        // more optimisation--> 6,18-20
        if(swapped == false) {
            // Already sorted
            break;
        }
        
    }
    
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[7] = {2, 8, 5, 9, 12, 4, 19};
    cout << "After Bubble sort ";
    bubbleSort(arr, 7);
    printArray(arr,7);
    return 0;
}