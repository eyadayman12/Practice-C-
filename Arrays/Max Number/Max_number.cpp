/**
* Write a C++ Program to take an integer array of size 10 as input and find the maximum value in the array.
* Sample Output:
* Enter element number 1 : 1
* Enter element number 2 : 2
* Enter element number 3 : 3
* Enter element number 4 : 4
* Enter element number 5 : 5
* Enter element number 6 : 6
* Enter element number 7 : 7
* Enter element number 8 : 8
* Enter element number 9 : 9
* Enter element number 10 : 10
* Max Value in the array: 10
**/

/// note:: handle the input Validation
#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];
    for (int i=0; i < SIZE; i++)
    {
        while(true)
        {
            cout<<"Enter Element number "<<i+1<<" :";
            cin>>arr[i];
            if (cin.fail())
            {
                cout<<"\n\nError!! Please enter an integer value\n\n";
                cin.clear();
                cin.ignore(10000, '\n');
            }
            else
                break;
            cout<<"\n";
        }
    }
    int iMaxValue = arr[0];
    for (int j = 1; j <= SIZE; j++)
    {
        if(iMaxValue < arr[j])
        {
            iMaxValue = arr[j];
        }
    }
    cout<<"\n\nMax Value in the array: "<<iMaxValue;


    return 0;
}
