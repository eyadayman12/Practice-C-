#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, new_s="";
    cin>>s;
    /// "A", "O", "Y", "E", "U", "I",
    for (int i=0; i<s.size(); i++){
        char letter = tolower(s[i]);
        if (letter=='a'||letter=='o'||letter=='y'||letter=='e'||letter=='u'||letter=='i'){
            continue;
            }
        else new_s=new_s+'.'+letter;
        }
    cout<<new_s;
    return 0;
}
