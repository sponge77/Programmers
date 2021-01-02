#include <iostream>
#include <algorithm>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int arr[4][2];
	int start[4];
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<2;j++){
			cin>>arr[i][j];
		}
	}
	
	start[0] = arr[0][1];
	start[1] = start[0] + (arr[1][1] - arr[1][0]);
	start[2] = start[1] + (arr[2][1] - arr[2][0]);
	start[3] = 0;
	
	int max=start[0];
	for(i=0;i<3;i++){
		if(max < start[i])
		max = start[i];
	}
	
	cout<<max;
	
	return 0;
}


