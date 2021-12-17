/**Write a program in C++ to find prime number within a range.
 * Sample Output: 
 * Input number for starting range: 1
 * Input number for ending range: 100
 * The prime numbers between 1 and 100 are:
 * 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
 * The total number of prime numbers between 1 to 100 is: 25
 **/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int iStart = 0, iEnd = 0, iPrime = 0, iTotal = 0;
    
    cout<<"Input number for starting range: ";
    cin>>iStart;

    cout<<"Input number for ending range: ";
    cin>>iEnd;

    while(true)
    {
        if(cin.fail())
        {
            cout<<"\nType Error! Please Enter a numeric values\n\nInput Again";
            cin.clear();
            cin.ignore(10000, '\n');
            cout<<"Input number for starting range: ";
            cin>>iStart;

            cout<<"Input number for ending range: ";
            cin>>iEnd;
        }
        else
        {
            cout<<"\n\nThe prime numbers between "<<iStart<<" and "<<iEnd<<" are:\n\n";
            for (int i = iStart; i<= iEnd; i++)
            {
                for(int j=2; j<=sqrt(i); j++)
                {
                    if(i%j==0)
                        iPrime++;
                }
                if(iPrime == 0 && i != 1)
                { 
                    iTotal++;
                    cout<<i<<" ";
                }
                iPrime=0;
            }
            break;
        }

    }
    cout<<"\n\nThe total number of prime numbers between "<<iStart<<" to "<<iEnd<<" is: "<<iTotal<<endl;
    return 0;
}