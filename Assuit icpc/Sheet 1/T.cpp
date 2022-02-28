#include <bits/stdc++.h>

using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if (a<=b && a<=c && b<=c) cout<<a<<endl<<b<<endl<<c<<"\n\n";
    else if (b<=a && b<=c && a<=c) cout<<b<<endl<<a<<endl<<c<<"\n\n";
    else if (c<=a && c<=b && b<=a) cout<<c<<endl<<b<<endl<<a<<"\n\n";
    else if (c<=a && c<=b && a<=b) cout<<c<<endl<<a<<endl<<b<<"\n\n";
    else if (b<=a && b<=c && c<=a) cout<<b<<endl<<c<<endl<<a<<"\n\n";
    else cout<<a<<endl<<c<<endl<<b<<"\n\n";

    cout<<a<<endl<<b<<endl<<c;



    return 0;
}
