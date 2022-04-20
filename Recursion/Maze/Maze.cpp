#include <bits/stdc++.h>

using namespace std;
#define ll 		long long


const int MAX=100;
char maze[MAX][MAX];
bool visited[MAX][MAX];
ll sizeOftheRows, sizeOfTheColumns;

bool checkTheValidityOfTheMazePositions(ll row, ll column){
    if (row==sizeOftheRows || column==sizeOfTheColumns || row<0 || column<0 || maze[row][column] == 'X' || maze[row][column] == 'x' || visited[row][column] == 1) return false;
    return true;
}

bool didWeReachTheEndOfTheMaze(ll row, ll column){
    if (maze[row][column] == 'E') return true;
    return false;
}

bool findTheEndOfTheMaze(ll row, ll column){
    if (!checkTheValidityOfTheMazePositions(row, column)) return false;
    visited[row][column]=1;
    if (didWeReachTheEndOfTheMaze(row, column)) return true;
    if (findTheEndOfTheMaze(row, column-1)) return true;
    if (findTheEndOfTheMaze(row, column+1)) return true;
    if (findTheEndOfTheMaze(row-1, column)) return true;
    if (findTheEndOfTheMaze(row+1, column)) return true;
    visited[row][column]=0;
    return false;
}
int main(){
    cin>>sizeOftheRows>>sizeOfTheColumns;
    for (ll i=0; i<sizeOftheRows; i++)
        for (ll j=0; j<sizeOfTheColumns; j++) cin>>maze[i][j];
    if(findTheEndOfTheMaze(0,0)) cout<<"We Solved The Puzzle!!";
    else cout<<"The Maze is like a Prison, it's impossible to get out :(";
}