#include <string>
#include <vector>

using namespace std;

int total;

void DFS(vector<int> &numbers, int &s,int sum,int n) {
    if(n>=numbers.size()){
        if(sum == s){
            total++;
        }
        return;
    }  
    DFS(numbers,s,sum+numbers[n],n+1);
    DFS(numbers,s,sum-numbers[n],n+1);
}

int solution(vector<int> numbers, int target) {
    int answer = 0;

    DFS(numbers, target, numbers[0] , 1);
    DFS(numbers, target, -numbers[0], 1);

    answer = total;

    return answer;
}
