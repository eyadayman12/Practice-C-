#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x; 
        cin>>x;
        if (x>45) cout<<-1<<endl;
        else if (x<=9) cout<<x<<endl;
        else {
            string s="";
            for (int i=9; i>=1; i--){
                if (x<=9 && x<=i){
                    s+=to_string(x);
                    break;
                }
                else{
                s+=to_string(i);
                x-=i;
                }
            }
            reverse(s.begin(), s.end());
            cout<<s<<endl;
        }
    }
    return 0;
}
