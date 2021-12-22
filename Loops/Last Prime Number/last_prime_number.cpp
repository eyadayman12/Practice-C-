/** Write a program in C++ to find the last prime number occur before the entered number. 
 * Sample Output:
 * Input a number to find the last prime number occurs before the number: 50
 * 47 is the last prime number before 50 
 */

///note:: Input Validation

#include<iostream>
#include<cmath>


using namespace std;

int main()
{
    d:int iNum, iPrime=0;
    int iLastPrimeNumber=0;

    while(true)
    {
        cout<<"Input a number to find the last prime number occurs before the number: ";
        cin>>iNum;

        if(cin.fail())
        {
            cout<<"\n\nError! Please Enter a valid number\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else
        {
            for(int i=1; i <=iNum; i++)
            {
                for (int j=2; j<=sqrt(i); j++)
                {
                    if (i % j == 0)
                        iPrime++;
                }
                if (iPrime == 0 && i!=1)
                    iLastPrimeNumber = i;

                iPrime=0;

            }
            break;
        }
    }
    cout<<iLastPrimeNumber<<" is the last prime number before "<<iNum;
    return 0;
}
