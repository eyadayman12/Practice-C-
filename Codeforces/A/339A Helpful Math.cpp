#include <bits/stdc++.h>

using namespace std;

int main(){

    string s, new_s="";
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if (s[i]!='+') new_s+=s[i];
    }
    sort(new_s.begin(), new_s.end());
    string add_p="";
    for (int i=0; i<new_s.size(); i++){
        if (i == new_s.size()-1) add_p += new_s[i];
        else add_p = add_p + new_s[i]+'+';
    }
    cout<<add_p;
    return 0;
}
