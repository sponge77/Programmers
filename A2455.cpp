#include <iostream>
#include <cstring>
using namespace std;
int main(void){
	int n,amount;
	cin>>n>>amount;
	int arr[n+1];
	int dp[amount+1]={1, };
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	dp[0] = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=amount;j++){
			if(j-arr[i] >= 0){
				dp[j]+=dp[j-arr[i]];
			}
		}
	}
	cout<<dp[amount];
	return 0;
}

