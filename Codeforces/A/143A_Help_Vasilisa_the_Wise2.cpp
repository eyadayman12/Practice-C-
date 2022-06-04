/**
 * @file file.cpp
 * @author EyadAiman
 * @date 2022-04-24
 */

#include <bits/stdc++.h>

using namespace std;

#define Eyad		                				ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll		   	        				long long
#define ull		    	                			unsigned long long
#define fr(n)             	        				for(int i=0; i<n; i++)
#define fr2(n)            	        				for(int i=n; i>=1; i--)
#define yesNo(cond)         	        				cout<<(cond ? "YES":"NO")
#define test                	        				int t; cin>>t; while(t--)
#define allA(arr,n)	    	        	    			(arr),(arr+n)
#define all(v)		    	        	    			v.begin(),v.end()
#define sz(v)	            	        				(ll)(v.size())
#define pb(n)								push_back(n)
#define minA(a,n)           	        				*min_element(a,a+n)
#define maxA(a,n)           	        				*max_element(a,a+n)
#define minV(v)           	        				*min_element(all(v))
#define maxV(v)           	        				*max_element(all(v))
#define cumSum(v)                       				accumulate(all(v), 0)
#define cumSumA(arr, n)                     				accumulate(allA(arr,n), 0)
#define cumProd(v)                      				accumulate(all(v), 1, multiplies<ll>())
#define sumOfProducts(v)                				inner_product(all(v), v.begin(), 0)
#define productsOfSum(v)                				inner_product(all(v), v.begin(), 1, multiplies<ll>(), plus<ll>())
#define partSum(v1, v2)                 				partial_sum(all(v1), back_inserter(v2))
#define partMinus(v1, v2)               				partial_sum(all(v1), back_inserter(v2), minus<int>())
#define adjDiff(v1, v2)                 				adjacent_difference(all(v1), v2.begin())
#define adjSum(v1, v2)                  				adjacent_difference(all(v1), v2.begin(), plus<ll>())
#define printArr(v,n)                 				        for(int i=0; i<n; i++) cout<<v[i]<<" "
#define cinArr(v,n)                     				fr(n) cin>>v[i];
#define perm(v,n)                       				sort( all(v) );do{printArr(v,n);}while(next_permutation(all(v)))
#define addKV(mp,k,v)                                   		mp[k]=v
#define findK(mp,k)                                     		mp.count(k)
#define printSTL(stl)                                   		for (auto li: stl) cout<<li
#define printMapA(mp)                                   		for (auto mm: mp) cout<< mm.first<< " "<< mm.second<<endl;
#define printMapD(mp)                                   		auto it = mp.rbegin();for(;it!=mp.rend(); it++) cout<< it->first << " "<< it->second<<endl;


typedef vector<int> vi;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<string>vs;
typedef vector<bool>vb;
typedef vector<ll>vll;
typedef vector<ull>vull;


int main(){
	Eyad
	int r1,r2,c1,c2,d1,d2;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	for (int i=1; i<= 9 ; i++){
		for (int j=1; j<=9; j++){
			for (int k=1; k<=9; k++){
				for (int m = 1; m<=9; m++){
					if (i+j==r1 && k+m==r2 && i+k==c1 && j+m==c2 && i+m==d1 && j+k==d2 && i!=j && i!=k && i!=m && j!=k && j!=m && k!=m){
						cout<<i<<" "<<j<<endl;
						cout<<k<<" "<<m;
						return 0;
					}
				}
			}
		}
	}
	cout<<-1;		                     
}