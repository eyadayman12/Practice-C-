/** Given an array and k, find sub array of length k with maximum sum 
 * think in the array: [a b c d e f g h] with k = 3
 * then we want to check
 * [a b c]
 *  [b c d]
 *   [c d e]
 *    [d e f]
 *     [e f g]
 *      [f g h]
 * Each one of them is called a window, and moving from window to another called sliding window.
 * This is called FIXED SIZE sliding window.
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
 * Sum of the Max Window = 27
 **/

/// note:: handle the input Validation

#include<iostream>

using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i <  SIZE; i++)
    {
        while(true)
        {
            cout<<"Enter Element Number "<<i+1<<": ";
            cin>>arr[i]; 
            if(cin.fail())
            {
                cout<<"\n\nError! Please enter a numeric value\n";
                cin.clear();
                cin.ignore(10000, '\n');
            }
            else
                break;
        }
    }

    int maxWindow = 0;

    int k;
    int iMaxWindow = 0;
    cout<<"\n\nEnter number of windows: ";
    cin>>k;
    for(int win=0; win < k; win++)
        iMaxWindow += arr[win];
    int iSum = iMaxWindow;
    for (int i = 1; i < SIZE-k+1; i++)
    {
        iSum = iSum - arr[i - 1] + arr[i + k -1];
        iMaxWindow = max(iMaxWindow, iSum);
    }
    cout<<"\n\nSum of the Max Window = "<<iMaxWindow;

    /// This solution cost less operation (Size+k) operation
}