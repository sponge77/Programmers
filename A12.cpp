#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a,b,v,result;
	cin>>a>>b>>v;
	result = ceil((double)(v-a)/(a-b)) + 1;
	cout<<(long)result;
	return 0;
}
