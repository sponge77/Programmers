//2468번 안전영역 
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <vector>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#define MAX_SIZE 101
using namespace std;
int dx[] = { 0,0,-1,1 };
int dy[] = { -1,1,0,0 };
int N,ans=1;
int lowest=101;
int highest=0;
int Area[101][101];
bool visited[101][101];

void dfs_recursion(int sy,int sx,int h){
	if(sy <=0 || sx<=0  || sy>N | sx>N) return;
	else if(visited[sy][sx]) return;
	else if(Area[sy][sx]<=h) return;
	
	visited[sy][sx] = true;
	
	for(int i=0;i<4;i++){
		int ny = sy+dy[i];
		int nx = sx+dx[i];
		
		dfs_recursion(ny,nx,h);
	}
	
	
}
int main(){
	ios::sync_with_stdio(false);
	cin>>N;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=N;j++){
			cin>>Area[i][j];
			lowest = min(lowest, Area[i][j]);
			highest = max(highest, Area[i][j]);
		}
	}
	for(int h=lowest;h<highest;h++){
	
	for(int i=1;i<=N;i++)
		memset(visited[i],false, sizeof(bool)*(N+1));
		
		int cnt=0;
		for(int i=1;i<=N;i++){
			for(int j=1;j<=N;j++){
				if(!visited[i][j] && Area[i][j] > h)
				{
					cnt++;
					dfs_recursion(i,j,h);
				}
			}
		}
		ans = max(cnt,ans);
	}
	cout<<ans<<'\n';
	return 0;
	
}

