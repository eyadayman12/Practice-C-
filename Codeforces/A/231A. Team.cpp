#include <iostream>

using namespace std;

int main(){
    int count=0;
    int n,a,b,c;
    cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if (a==1 && b==1) count++;
        else if (b == 1 && c == 1) count++;
        else if (a==1 && c==1) count++;
        
    }
    cout<<count;
    return 0;
}