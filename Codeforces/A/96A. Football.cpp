#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int count = 1;
    for (int i=0; i<s.size()-1 ; i++){
        if (s[i] == s[i+1]) count++;
        else count=1;
        if (count == 7) break;
    }
    string cond = (count==7) ? "YES":"NO";
    cout<<cond;
    return 0;
}
