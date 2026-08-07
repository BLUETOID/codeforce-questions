#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
	if(b==0) return a;
	return GCD(b, a%b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;

		cout<<n/2<<endl;
	}

	return 0;
}

//at first i made using loop and yeah TLE so the best approach was 
// let the greatest GCD is g , and g and number must be greater than g also g must divide both number and the least greatest 2nd number will be 2.g i mean the second number 
// and 2g <= n so if we need greatest we will chosse g = n/2