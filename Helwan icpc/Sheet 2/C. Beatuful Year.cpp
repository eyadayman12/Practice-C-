#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main() {
    int y, beatufiul_year=0;
    cin>>y;
    for (int i=1000; i<= 9000; i++){
        y++;
        string year = to_string(y);
        if(year[0]!= year[1] && year[0] != year[2] && year[0]!= year[3] && year[1] != year[2]&& year[1] != year[3] && year[2] != year[3]){
            beatufiul_year=y;
            break;
        }
    }
    cout<<beatufiul_year;

    return 0;
}
