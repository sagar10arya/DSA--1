#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void alternateSwap(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void alternateBoundaryElementsSwap(int arr[], int size)
{

    int i = 0;
    int j = size - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i = i + 1;
        j = j - 1;
    }
}

int findUnique(int arr[], int size){

    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans^arr[i]; // xor as we know that a^a=0 and 0^a=a
    }
    return ans;
}


int main()
{


    int size;
    cin >> size;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // reverse(arr,size);
    // cout<<"Reversed Array ";
    // printArray(arr,size);

    // alternateSwap(arr,size);
    // cout<<"Alternate Swap Array ";
    // printArray(arr,size);

    // alternateBoundaryElementsSwap(arr, size);
    // cout << "Alternate Boundary elements swap Array ";
    // printArray(arr, size);

    cout<<"The unique element in the array is ";
    cout <<findUnique(arr,size);
    

    return 0;
}