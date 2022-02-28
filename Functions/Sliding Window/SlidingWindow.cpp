#include <bits/stdc++.h>

using namespace std;

/// Complixity O(size*k)
int sliding_window(int arr[], int size, int k){
    int maximum_sum = 0;
    for (int i=0; i<size-k+1; i++){
        int sum=0;
        for (int window = 0; window < k; window++){
            sum+=arr[i+window];
        }
        if (i == 0 || sum > maximum_sum) maximum_sum = sum;
        sum=0;
    }
    return maximum_sum;
}

/// Complixity O(size+k)
int sliding_window_less (int arr[], int size, int k){
    int max_sum = 0;
    for (int window = 0; window < k; window ++) {
        max_sum+=arr[window];
    }
    int sum = max_sum;
    for (int i=0; i<size-k+1; i++) {
        sum = sum - arr[i-1] + arr[i+k-1];
        max_sum = max(max_sum, sum);
    }
    return max_sum;
}
int main() {
    int n, k; cin>>n>>k;
    int arr[n]; for (int i=0; i<n; i++) cin>>arr[i];
    cout<<sliding_window(arr, n, k)<<endl;
    cout<<sliding_window_less(arr,n,k);
    return 0;
}