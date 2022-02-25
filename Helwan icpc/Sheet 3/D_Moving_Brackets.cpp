#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        int total = 0, count = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '(') total++;
            else if (s[i] == ')') total--;
            if (total == -1) {
                count++;
                total=0;
            } 
        }
        cout<<count<<endl;
    }
}