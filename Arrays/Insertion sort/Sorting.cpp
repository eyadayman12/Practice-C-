/** 
 * Write a C++ Program that takes an Array and print the array sorted
 * (implement it with insertion sort)
 * Sample Output:
 * Enter Element number 1: 10
 * Enter Element number 2: 9
 * Enter Element number 3: 8
 * Enter Element number 4: 7
 * Enter Element number 5: 6
 * Enter Element number 6: 5
 * Enter Element number 7: 4
 * Enter Element number 8: 3
 * Enter Element number 9: 2
 * Enter Element number 10: 1
 * Your Array:
 * 10 9 8 7 6 5 4 3 2 1
 * Array after Sorted:
 * 1 2 3 4 5 6 7 8 9 10
 **/

///note:: Handle Input Validation
#include<iostream>

using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    for(int i=0; i<SIZE; i++)
    {
        while(true)
        {
            cout<<"Enter Element number "<<i+1<<": ";
            cin>>arr[i];

            if(cin.fail())
            {
                cout<<"\n\nError, Please Enter a numeric value\n";
                cin.clear();
                cin.ignore(10000, '\n');
            }
            else
                break;
        }
    }

    cout<<"\n\nYour Array:\n";
    for(int i=0; i<SIZE; i++)
        cout<<arr[i]<<" ";


    for(int i=1; i<SIZE; i++)
    {
        int cpy = arr[i];
        int j = i-1;

        for(; j>=0; j--)
        {
            if (arr[j] < cpy)
                break;
            arr[j+1] = arr[j];
        }
        arr[j+1] = cpy;
    }
    cout<<"\n\nArray after Sorted:\n";
    for(int i=0; i<SIZE; i++)
        cout<<arr[i]<<" ";
    cout<<"\n\n";
    return 0;
}
