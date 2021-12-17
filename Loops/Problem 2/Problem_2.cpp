   /** Problem: Find How Many X,Y numbers such that:
                * X in range[1-100]
                * Y in range[70-200]
                * X<Y
                * (X+Y) divisible by 7**/

#include <iostream>

using namespace std;

int main()
{
    int iCount=0;
    for (int iX=1; iX<=100; ++iX)
    {
        for (int iY=(iX >= 70 ? iX : 70); iY<=200; ++iY)
        {
            bool condition_1 = iX<iY;
            bool condition_2 = (iX+iY) % 7 == 0;

            if(condition_1 && condition_2)
                iCount+=1;
        }
    }

    cout<<iCount<<endl;
    return 0;
}