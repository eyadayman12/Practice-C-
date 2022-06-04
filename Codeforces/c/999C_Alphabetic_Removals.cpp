#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    string str, ans="";
    cin>>str;
    vector<int>ch(26,0);
	for(int i=0; i<n; i++) ch[str[i]-'a']++;
    for(int i = 0; i < 26; i++){
        int tmp = min(k, ch[i]);
        k -= tmp, ch[i] -= tmp;
    }
    for(int i = n - 1; i >= 0; i--)
        if(ch[str[i] - 'a']-- > 0)
            ans += str[i];
    reverse(ans.begin(), ans.end());
    cout<<ans;
}
