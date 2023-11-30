#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[], int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max=arr[i];
    }
    }

    return max;
}

int getMin(int arr[], int size){
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min=arr[i];
    }
    }

    return min;
}

int arraySum(int arr[],int size){

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
   return sum; 
}

int linearSearch(int arr[],int size, int key){

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == key){
            return true;
        }
        
    }
    return false;
}

void arrayReverse(int arr[], int size){

    for (int i = size; i >= 0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main(){

    int size;
    cin>>size;
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"The max value is "<<getMax(arr,size)<<endl;
    cout<<"The min value is "<<getMin(arr,size)<<endl;
    cout<<"The sum of array is "<<arraySum(arr,size)<<endl;
    
    int key;
    cout<<"Enter no. to find ";
    cin>>key;

    bool found = linearSearch(arr,size,key);

    if(found){
        cout<<"Key is Present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }
    
    
    return 0;
}