#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    set<char>ch;
    for (int i=0; i<s.size(); i++)
        ch.insert(s[i]);
    string result = (ch.size()%2) == 0 ? "CHAT WITH HER!" : "IGNORE HIM!";
    cout<< result;
    return 0;
}
