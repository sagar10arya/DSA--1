// First and last occurence of an element in an array
#include<bits/stdc++.h>
using namespace std;

int FirstOccurence(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    // int mid = (start + end)/2;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start <= end)
    {
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        if(arr[mid] < key){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end-start)/2;

    }
    return ans;  
}


int LastOccurence(int arr[], int size, int key){
    int start = 0;
    int end=size-1;
    // int mid = (start + end)/2;
    int mid = start + (end-start)/2;
    int ans = -1;
    while (start <= end)
    {
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
           
        }   
        else if( key < arr[mid]){

             end = mid - 1;
        }

        mid = start + (end-start)/2;

    }
    return ans;  
}


int main(){

    int even[7] = {1,2,3,3,3,3,5};

    cout<< " The first occurence of 3 is at index "<< FirstOccurence(even, 7, 3)<<endl;;
    cout<< " The Last occurence of 3 is at index "<< LastOccurence(even, 7, 3)<<endl;

    cout<<"Total no of occurences "<< (LastOccurence(even, 7, 3) - FirstOccurence(even, 7, 3)) + 1;  

    return 0;
}