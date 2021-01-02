#include <stdio.h>
int main(void){
	int i,j,s1,s2;
	int arr[9];
	int sum=0;
	for(i=0;i<9;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	
	for(i=0;i<8;i++){
		for(j=i+1;j<9;j++){
			if(sum - arr[i] - arr[j] == 100){
				s1 = i;
				s2 = j;
				break;
			}
		}
	}
	
	for(i=0;i<9;i++){
		if(i==s1 || i==s2) continue;
		printf("%d\n",arr[i]);
	}
}

