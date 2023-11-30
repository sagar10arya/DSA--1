#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[],int size, int key){
    
    if(size == 0) return false;

    if(key == arr[0]) return true;
    else{
        bool remainingPart = linearSearch(arr+1,size-1,key);
        return remainingPart;
    }

}


int main()
{
    int arr[5] = {3,7,1,6,9};
    int size = 5;
    int key;
    cin>>key;

    bool ans = linearSearch(arr,size,key);
    
    if(ans){
        cout<<"Element is present"<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
    }
    return 0;
}