/**
*  author: Eyad
*
**/
#include <bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define test int t; cin>>t; while(t--)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define fr for(int i=0; i<x; i++)
#define fastrun()  ios::sync_with_stdio(false);cin.tie(0);
 
int main(){
    fastrun()
    int t;
    cin>>t;
    while(t--){
    ll k;
    cin>>k;
    ll n=k;
    ll o=k;
    ll ma = 0;
    ll mi = 0;
    ll ko = 0;
    string s,p;
    while (n>0){
        if (ma == 0){
            mi++;
            ma++;
            n-=1;
            s+=to_string(1);
        }
        else{
            mi+=2;
            ma=0;
            n-=2;
            s+=to_string(2);
        }
    }
    ma=0;
    while (o>0){
        if (ma==0){
            ko+=2;
            ma++;
            o-=2;
            p+=to_string(2);
        }
        else{
            ko++;
            ma=0;
            o-=1;
            p+=to_string(1);
        }
    }
    if (mi == k && ko == k){
        if(s>p){
            cout<<s<<endl;
        }
        else{
            cout<<p<<endl;
        }
    }
    else if (mi == k){
        cout<<s<<endl;
    }
    else{
        cout<<p<<endl;
    }
 
}
 
}