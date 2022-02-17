/**
 * Problem Statment:
 * An elephant decided to visit his friend. 
 * It turned out that the elephant's house is located at point 0 and his friend's house is located at point x(x > 0) of the coordinate line. 
 * In one step the elephant can move 1, 2, 3, 4 or 5 positions forward. 
 * Determine, what is the minimum number of steps he need to make in order to get to his friend's house.
 */

///Solution:

#include <iostream>

using namespace std;

int main() {
    int x, num_of_steps=0;
    cin>>x;
    if(x<=5) num_of_steps=1;
    else if (x>5 && x%5==0) num_of_steps = x/5;
    else num_of_steps = 1+(x/5);
    cout<<num_of_steps;
    return 0;
}
