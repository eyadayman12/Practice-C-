/**
 * Problem Statment:
 * There are H rows and W columns of white square cells.
 * You will choose hh of the rows and ww of the columns, and paint all of the cells contained in those rows or columns.
 * How many white cells will remain?
 * It can be proved that this count does not depend on what rows and columns are chosen.
 */

///Solution:

#include <iostream>

using namespace std;

int main() {
    int H,W,h,w;
    cin>>H>>W;
    cin>>h>>w;
    cout<<(H-h) * (W-w);
    return 0; 
}