#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
   /* for (int i = 0; i < n-1; i++)
   {
        int temp = arr[i];
        int j = i-1;
        for ( ;j >= 0; j--)
        {
            if(arr[j] > temp){
                // shift
                arr[j+1] = arr[j];
            }
            else break;
        }
        arr[j+1] = temp;
   }   */

    for (int i = 1; i < n; i++)
   {
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else break;
            j--;
        }
        arr[j+1] = temp;
     
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
    cout << "After Insertion sort ";
    insertionSort(arr, 7);
    printArray(arr,7);
    return 0;
}