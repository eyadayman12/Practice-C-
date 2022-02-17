/**
 * Problem Statement:
 * You have r red and b blue beans. You'd like to distribute them among several (maybe, one) packets in such a way that each packet:
 * has at least one red bean (or the number of red beans ri≥1);
 * has at least one blue bean (or the number of blue beans bi≥1);
 * the number of red and blue beans should differ in no more than d (or |ri - bi| ≤d);
 *  Can you distrbute Them?
 **/

///Solution:

#include <iostream>

using namespace std;

int main() {
    int t,r,b,d;
    cin>>t;
    while(t--) {
        cin>>r>>b>>d;
        int differ = abs(r - b);
        int minumum = min(r,b);
        int each_packet = (differ + minumum - 1) / minumum;
        if (each_packet <= d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
