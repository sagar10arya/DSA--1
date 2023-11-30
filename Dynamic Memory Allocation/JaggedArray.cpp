#include <bits/stdc++.h>
using namespace std;
/*
A jagged array is an array of arrays such that member arrays can be of different sizes, in 2D array terms for each row we can have a variable number of columns. These types of arrays are also known as Jagged arrays. 

arr[3][] = 1 2 3 4        // arr[0][4] : 1st row have 4 columns
           5 6            // arr[1][2] : 2nd row have 2 columns
           7 8 9          // arr[2][3] : 3rd row have 3 columns
*/

int main()
{
    int row;
    cout<<"Enter row: ";
    cin>>row;

    // creating 2D array
    int **arr = new int *[row]; // jagged  array

    // int sizes[] = {4, 2 , 3};
    int *sizes = new int[row]; //array to  store no of colums in eachrow

    for (int i = 0; i < row; i++)
    {
        cout<<"Enter no. of Cols in row "<<i<<": "<<endl;
        cin>>sizes[i];
        // creating cols of sizes[i] for each row
        arr[i] = new int [sizes[i]];
    }
    
    // input from user

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < sizes[i]; j++){
            cin>>arr[i][j];
        }
    }

    
    // output from user
    cout << "Elements in matrix form is: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < sizes[i]; j++){
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