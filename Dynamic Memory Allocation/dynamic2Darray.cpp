#include <bits/stdc++.h>
using namespace std;
/*
1. How to create a 2D array dynamically
2. I/O
3. memory release krni hai
*/

int main()
{
    int row;
    cout<<"Enter row: ";
    cin>>row;
    cout<<"Enter Column: ";
    int col;
    cin>>col;

    // Creating 2D array
    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    

    // taking inputs
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }

    // printing output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    // releasing memory
    for (int i = 0; i < row; i++)
    {
        delete [] arr[i];
    }
    
    delete []arr;









    return 0;
}