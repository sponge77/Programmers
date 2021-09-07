#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;
bool check(int sum){
	int cnt=0;
	int arr[10];
	int tmp = sum;
	while(tmp!=0){
		arr[cnt] = tmp%10;
		tmp/=10;
		cnt++;
	}
	
	int start = 0;
	int end = cnt-1;
	int flag = 0;
	while(start <= end){
		if(arr[start] != arr[end]){
			flag = 1;
			break;
		}else{
			start++;
			end--;
		}
	}
	if(flag == 1) return false;
	else return true;
	
	
}
int main(void){
	int num;
	cin>>num;
	int arr[num];
	int number;
	int tmp;
	int reverseN;
	int sum;
	int N;
	for(int i=0;i<num;i++){
		cin>>number;
		N = number;
		tmp = number;
		reverseN=0;
		sum=0;
		while(tmp!=0){
			reverseN = reverseN*10 + tmp%10;
			tmp/=10;
		}
		sum = N + reverseN;
		
		if(check(sum) == true) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
		
	}
}
