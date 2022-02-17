/**
 * Problem Describtion:
 * Anton likes to play chess, and so does his friend Danik.
 * Once they have played n games in a row. For each game it's known who was the winner — Anton or Danik. None of the games ended with a tie.
 * Now Anton wonders, who won more games, he or Danik? Help him determine this.
 * 
 */

/// Solution:

#include <iostream>


using namespace std;

int main() {
    int n, a=0, d=0;
    cin>>n;
    while(n--){
        char s;
        cin>>s;
        if (s=='A') a++;
        else d++;
    }
    if (a>d) cout<<"Anton";
    else if (d>a) cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}
