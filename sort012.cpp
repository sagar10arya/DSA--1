#include <bits/stdc++.h>
using namespace std;

void segregate(int arr[], int n){
    int left = 0;
    int right = n-1;
    int mid = 0;

    while(mid <= right){

    
    if(arr[mid] == 0){
        swap(arr[left],arr[mid]);
        mid++;
        left++;
    }

    if(arr[mid] == 1){
        mid++;
    }

    if(arr[mid] == 2){
        swap(arr[mid],arr[right]);
        right--;
    }
    }
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){

     int arr[] = {0, 1, 2, 1, 1, 1, 0, 2, 1, 0, 2, 2, 0, 1};

    cout<<"The sorted 0's and 1's are ";
    segregate(arr,14);
    printArray(arr,14);

    return 0;
}