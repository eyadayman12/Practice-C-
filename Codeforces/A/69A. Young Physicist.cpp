#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int sum_a=0, sum_b=0, sum_c=0;
    for (int i=0; i<n; i++){
        int a,b,c;
        cin>>a>>b>>c;
        sum_a+=a;
        sum_b+=b;
        sum_c+=c;
    }
    string cond = (sum_a == 0 && sum_b == 0 && sum_c == 0) ? "YES":"NO";
    cout<<cond;
    return 0;
}
