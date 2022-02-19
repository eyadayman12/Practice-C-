#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void reverseStr(string& str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    cout<<str;
}

int main() {

    string s, rotat="";
    cin>>s;
    int t=s.length();
    for(int i=0; i<t; i++){
        if (s[i] == '0') rotat+='0';
        else if (s[i] == '1') rotat+='1';
        else if (s[i] == '6') rotat+='9';
        else if (s[i] == '8') rotat+='8';
        else if (s[i] == '9') rotat+='6';
    }
    reverseStr(rotat);

    return 0;
}
