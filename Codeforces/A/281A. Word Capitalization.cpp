#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, new_s="";
    cin>>s;
    if (s[0] >= 'Z'){
        new_s = toupper(s[0]);
        for (int i=1; i<s.size(); i++) new_s += s[i];
    }
    else new_s=s;

    cout<<new_s;
    return 0;
}
