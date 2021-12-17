/** Problem: In range 1-100 count how many numbers that has following property:
                * Either number is divisible by 4
                * Or divisible by both 6 and 10 **/

#include<iostream>

using namespace std;


int main()
{
    int iCount=0;

    for(int iCounter=1; iCounter<=100; ++iCounter)
    {
        bool property_1 = iCounter % 4 == 0;
        bool property_2 = (iCounter % 6 == 0 && iCounter % 10 == 0);

        if (property_1 || property_2)
            iCount+=1;
    }
    cout<<iCount<<endl;
}