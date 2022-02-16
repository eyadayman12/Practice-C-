#include <iostream>

using namespace std;

int main() {
    int k,n,a,i,count=0;
    cin>>n>>k;
    if(n>=k && k>=1 && n<=50){
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int temp=arr[k-1];
        for(int i=0; i<n; i++){
            if(arr[i] >= temp && arr[i] > 0) count++;
        }
    }
    cout<<count;
    return 0;
}