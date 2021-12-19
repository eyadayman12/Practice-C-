/** Write a Program in c++ to reverse an array (in Place)
* in Place algorithm: only use some constants...don't create new arrays
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
* The Reversed Array:
* 10 9 8 7 6 5 4 3 2 1
**/

/// note:: Handle input Validation
#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 10;
    int arr[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        while(true)
        {
            cout<<"Enter the value of element number "<<i+1<<": ";
            cin>>arr[i];
            if(cin.fail())
            {
                cout<<"\n\nError!! Please Enter a numeric value\n";
                cin.clear();
                cin.ignore(10000, '\n');
            }
            else
                break;
        }
    }
    for (int i = 0; i < SIZE / 2; i++)
        swap(arr[i], arr[SIZE-i-1]);
    
    cout<<"\n\nThe Reversed Array:\n";
    for (int i = 0; i < SIZE; i++)
        cout<<arr[i]<<" ";
    int x;
    cin>>x;

    return 0;
}