#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(int arr[],int start,int end, int key){
    // base case
    if(start  < end) return -1;

    int mid = start + (end-start)/2;

    if( arr[mid] == key) return true;

    if(arr[mid] < key){
        return BinarySearch(arr, mid+1, end, key);
    }
    else{
       return BinarySearch(arr, start, mid-1, key);
    }
    

}


int main()
{
    int arr[7] = {2,4,10,14,16,18,22};
    int size = 7;
    int key;
    cin>>key;

    bool ans = BinarySearch(arr,0, 6,key);
    
    if(ans){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }
    return 0;
}