#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	while(n--){
	    int a;
	    cin>>a;
	    if(a%3==0){
	        cout<<0<<endl;
	        continue;
	    }
	    int z =a;
	    z = z + 5;
	    z = z - (z%5);
	    if(z%3 == 0){
	        cout << 1;
	        return 0;
	    }
	    int count =0;
	    while(a % 3 !=0){
	        a++;
	        count++;
	    }
	    cout << count<<endl;
	}

}
