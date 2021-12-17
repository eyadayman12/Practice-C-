/**Write a program in C++ to check whether a number is prime or not.**/

#include<iostream>

using namespace std;

int main()
{
    int iNum=0;
    int iPrime=0;

    cin>>iNum;
     while (true)
        {
            if(cin.fail())
            {
                cout<<"Type Error! Please Enter an integer value\n\nInput again: ";
                cin.clear();
                cin.ignore(10000, '\n');
                cin>>iNum;
            }
            else
            {
                for (int i = 1; i < iNum; i++)
                {
                    if (iNum % i == 0)
                        iPrime++;
                }
                if (iPrime == 1)
                    cout<<iNum<<" is a Prime Number.\n";
                else
                    cout<<iNum<<" is NOT a Prime Number.\n";
                break;
            }
            
        }
    
    
}