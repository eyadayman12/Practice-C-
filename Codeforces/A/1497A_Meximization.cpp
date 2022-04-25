/**
* author: @EyadAiman
*/

#include <bits/stdc++.h>

using namespace std;

#define Eyad			                ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll		   	                long long
#define ull		    	                unsigned long long
#define fr(i,n)             	        	for(i=0; i<n; i++)
#define fr2(i,n)            	        	for(i=n-1; i>0; i--)
#define yesNo(cond)         	        	cout<<(cond ? "YES":"NO")
#define test                	        	int t; cin>>t; while(t--)
#define allA(arr,n)	    	            	(arr),(arr+n)
#define all(v)		    	            	v.begin(),v.end()
#define sz(v)	            	        	v.size()
#define minA(a,n)           	       	        *min_element(a,a+n)
#define maxA(a,n)           	        	*max_element(a,a+n)
#define cumSum(v)                       	accumulate(all(v), 0)
#define cumProd(v)                      	accumulate(all(v), 1, multiplies<ll>())
#define sumOfProducts(v)                	inner_product(all(v), v.begin(), 0)
#define productsOfSum(v)                	inner_product(all(v), v.begin(), 1, multiplies<ll>(), plus<ll>())
#define partSum(v1, v2)                 	partial_sum(all(v1), back_inserter(v2))
#define partMinus(v1, v2)               	partial_sum(all(v1), back_inserter(v2), minus<int>())
#define adjDiff(v1, v2)                 	adjacent_difference(all(v1), v2.begin())
#define adjSum(v1, v2)                  	adjacent_difference(all(v1), v2.begin(), plus<ll>())
#define printArr(v,n)                   	fr(i,n) cout<<v[i]<<" "; cout<<endl
#define cinArr(v,n)                     	fr(i,n) cin>>v[i]
#define perm(v,n)                       	sort( all(v) );do{printArr(v,n);}while(next_permutation(all(v)))

typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<string>vs;
typedef vector<ll>vll;
typedef vector<ull>vull;

int main()
{
    Eyad
    test{
        	int n, i=0,j=0;
		cin>>n;
		vi v1(n);
		vi v2(101);
		fr(i,n){
			cin>>v1[i];
			v2[v1[i]]++;	
		}
		fr(i,101){
			if (v2[i]>0){
				cout<<i<<" ";
				v2[i]--;
			}
		}
		fr(i,101){
			fr(j,v2[i]) cout<<i<<" ";
		}
		cout<<endl;
	}    
    
    return 0;
}
