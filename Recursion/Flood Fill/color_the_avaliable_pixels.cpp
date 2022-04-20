#include <bits/stdc++.h>

using namespace std;
#define ll 		long long


const int MAX=100;
char picture[MAX][MAX];
bool visited[MAX][MAX];
ll sizeOftheRows, sizeOfTheColumns, countPixels;

bool checkTheValidityOfThePixelPosition(ll row, ll column){
    if (row==sizeOftheRows || column==sizeOfTheColumns || row<0 || column<0 || picture[row][column] == 'X' || picture[row][column] == 'x' || visited[row][column] == 1) return false;
    return true;
}

void countColoredPixels(ll row, ll column){
    if (!checkTheValidityOfThePixelPosition(row, column)) return;

    visited[row][column]=1;
    countPixels++;
    countColoredPixels(row, column-1);
    countColoredPixels(row, column+1);
    countColoredPixels(row-1, column);
    countColoredPixels(row+1, column);
}

int main(){
    
    cin>>sizeOftheRows>>sizeOfTheColumns;
    for(ll i=0; i<sizeOftheRows; i++)
        for (ll j=0; j<sizeOfTheColumns; j++) cin>>picture[i][j];
    countColoredPixels(0,0);
    cout<<countPixels;
}