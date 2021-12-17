/**Write a program in C++ to find the perfect numbers between 1 and 500. Go to the editor
The perfect numbers between 1 to 500 are:
6
28
496**/

#include<iostream>

using namespace std;

int main()
{
    int i = 0, j = 0, iSum = 0;

    for (int i=1; i<=500; i++)
    {
        for (int j=1; j<=500; j++)
        {
            if(i > j)
            {
                if (i % j == 0)
                    iSum+=j;
            }
            else
                break;
        }
        if (iSum == i)
            cout<<i<<"\n";
        
        j = 1;
        iSum = 0;
    }
    return 0;
}