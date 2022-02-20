#include <bits/stdc++.h>

using namespace std;

int main() {

    int t,n, count=0;
    cin>>t;
    while(t--){
        cin>>n;
        for (int i = 1; i<=n; i=i*10+1){
            for (int j=1; j<=9; j++){
                if (i * j <= n) count++;
            }
        }
        cout<<count<<endl;
        count=0;
    }

    return 0;
}
