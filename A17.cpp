#include <bits/stdc++.h>
using namespace std;
//동서남북 문제 

int main(void){
	int n,m;
	int x,y,h;
	//int a,b;
	int result=10000;
	bool check=true;
	cin>>n>>m;
	//cin>>m;
	string arr[m][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		check = true;
		cin>>x>>y>>h;
		int startx=x-1;
		int starty=y-1;
		while(h--){
		
		if(startx<0 || startx>=m || starty<0 || starty>=m){
			//cout<<'a';
			check = false;
			break;
		}
		if(arr[startx][starty][0]=='N'){
			startx-=(arr[startx][starty][1]-'0');
		}else if(arr[startx][starty][0]=='S'){
			//cout<<'b';
			startx+=(arr[startx][starty][1]-'0');
		}else if(arr[startx][starty][0]=='E'){
			starty+=(arr[startx][starty][1]-'0');
		}else{
			starty-=(arr[startx][starty][1]-'0');
		}
		//cout<<startx<<' '<<starty<<endl;
	}
	if(check==true)
		result = (arr[startx][starty][1]-'0') * 1000;
		 //범위 벗어나는 경우 10000 을 리턴한다 
		cout<<result<<endl;
	}
	
	

	
	return 0;
}
​
