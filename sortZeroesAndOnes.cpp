#include <bits/stdc++.h>
using namespace std;

void segregate(int arr[], int n){

    int left = 0;
    int right = n-1;

    while(left < right){

        if(arr[left] == 0){
            left++;
        }

        if(arr[right] == 1){
            right--;
        }

        if(arr[left] == 1 && arr[right] == 0){
            swap(arr[left],arr[right]);
            left++;
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

     int arr[] = {0, 1, 0, 1, 1, 1,0,0,1,0,1};

    cout<<"The sorted 0's and 1's are ";
    segregate(arr,11);
    printArray(arr,11);

    return 0;
}