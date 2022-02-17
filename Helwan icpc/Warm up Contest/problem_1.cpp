/**
 * Problem Description:
 * You are given an array a consisting of n (n≥3) positive integers. It is known that in this array,
 * all the numbers except one are the same (for example, in the array [4, 11, 4, 4] all numbers except one are equal to 4).
 * Print the index of the element that does not equal others. The numbers in the array are numbered from one.
 */

/// Solution:

#include <iostream>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; ++i) cin>>arr[i];
        bool isFound = false;
        for (int i=1; i<n-1; ++i){
            if (arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
                cout<<i+1<<endl;
                isFound =true;
            }
        }
        if (!isFound){
            if (arr[0]!=arr[1]) cout<<1<<endl;
            else cout<<n<<endl;
        }
    }
    return 0;
}
