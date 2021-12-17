/** Problem: Find Count of 4 numbers A,B,C,D such that:
                * 0<=A,B,C,D<100 (Each number in this range)
                * A+B+C+D=100**/

#include<iostream>

using namespace std;

int main()
{
    int iCount = 0;
    for(int a=0; a<100;++a)
    {
        for(int b=0; b<100; ++b)
        {
            for(int c=0; c<100; ++c)
            {
                int d = 100 - (a+b+c) ;

                if (d >= 0 && d < 100)
                    iCount++;
            }
        }
    }

    cout<<iCount<<endl;
}