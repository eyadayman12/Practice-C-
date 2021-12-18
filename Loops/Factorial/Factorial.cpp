/**Write a program in C++ to find the factorial of a number. Go to the editor
 * Sample output:
 * Input a number to find the factorial: 5
 * The factorial of the given number is: 120
**/

// note handle the input validation

#include<iostream>

using namespace std;

int main()
{
    unsigned int iNum;
    long long factorial = 1;
    cout<<"\nInput a number to find the factorial: ";
    cin>>iNum;

    while(true)
    {
        if(cin.fail())
        {
            cout<<"Type Error! Please enter a numeric number, Input again\n";
            cin.clear();D:
            cin.ignore(10000, 'D:\n');
            cout<<"\nInput a number to find the factorial: ";
            cin>>iNum;
        }
        else
        {
            for (int i = 1; i <= iNum; i++)
            {
                factorial*=i;
            }
            break;
        }
    }
    cout<<"\n\nThe factorial of the given number is: "<<factorial<<"\n\n";
}