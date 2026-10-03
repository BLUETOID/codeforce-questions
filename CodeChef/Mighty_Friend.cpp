#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

void solve() {
	int n,k;
	cin>>n>>k;
	vi a(n);
	int motu_sum = 0;
	int tomu_sum = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i%2==0){
			tomu_sum+=a[i];
		}else{
			motu_sum+=a[i];
		}
	}
	if(motu_sum>tomu_sum){
		cout<<"YES\n";
		return;
	}

	while(k--){
		
		int largest_odd_index = -1;
		int smallest_even_index = -1;

		for(int i=0;i<n;i++){
			if(i%2!=0){
				if(smallest_even_index==-1 || a[i]<a[smallest_even_index]){
					smallest_even_index=i;
				}
			}else{
				if(largest_odd_index==-1 || a[i]>a[largest_odd_index]){
					largest_odd_index=i;
				}
			}
		}

		swap(a[smallest_even_index], a[largest_odd_index]);
	}
	
	tomu_sum = 0;
	motu_sum = 0;

	for(int i=0;i<n;i++){
		if(i%2==0){
			tomu_sum+=a[i];
		}else{
			motu_sum+=a[i];
		}
	}
	if(motu_sum>tomu_sum){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}