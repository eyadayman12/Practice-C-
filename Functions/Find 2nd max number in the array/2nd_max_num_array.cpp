#include <bits/stdc++.h>

using namespace std;

int get_2nd_max(int arr[], int size) {
    assert(size>=2);
    int first_max = arr[0], second_max = arr[1];
    if (first_max < second_max) swap(first_max, second_max);
    for (int i=2; i<size; i++){
        if (arr[i] > first_max){
            second_max = first_max;
            first_max = arr[i];
        }
        else if (arr[i] > second_max) second_max = arr[i];
    }
    return second_max;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) cin>>arr[i];
    cout<<get_2nd_max(arr, n);
}