#include <iostream>
#include <cstring>
using namespace std;
int dp[51][51][51];
int W(int,int,int);
int main(void){
	int a,b,c;
	int n;
	int result;
	memset(dp,0,sizeof(dp));
	while(true){
		cin>>a>>b>>c;
		if(a==-1 && b==-1 && c==-1) break;
		result = W(a,b,c);
			cout<<"w("<<a<<", "<<b<<", "<<c<<") = "<<result<<'\n';
	}
	return 0;
}
int W(int a,int b, int c){
	if(a<=0 || b<=0 || c<=0){
		return 1;
	}
	if(a>20 || b>20 || c>20){
		return W(20,20,20);
	}
	if(dp[a][b][c] > 0){
		return dp[a][b][c];
	}
	if(a<b && b<c){
		return dp[a][b][c] = W(a, b, c-1) + W(a, b-1, c-1) - W(a, b-1, c);
	}
	else{
		return  dp[a][b][c] = W(a-1, b, c) + W(a-1, b-1, c) + W(a-1, b, c-1) - W(a-1, b-1, c-1);
	}
}
