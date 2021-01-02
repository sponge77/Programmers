#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> num1(10000);
    vector<int> num2(10000);
    vector<int> num3(10000);
    int max,t;
    int count[3] = {0, };

    int n2[8] = {2,1,2,3,2,4,2,5};
    int n3[10] = {3,3,1,1,2,2,4,4,5,5};
    for(int i=0;i<10000;i++){
        num1[i] = i%5+1;
        num2[i] = n2[i%8];
        num3[i] = n3[i%10];
    }
    for(int i=0;i<answers.size();i++){
        if(answers[i] == num1[i]) count[0]++;
        if(answers[i] == num2[i]) count[1]++;
        if(answers[i] == num3[i]) count[2]++;
    }

    max = 0;
    for(int i=0;i<3;i++){
        if(max < count[i]){
            max = count[i];
            t = i;
            //answer.push_back(t+1);
        }

    }
    answer.push_back(t+1);
    for(int i=t+1;i<3;i++){
        if(count[t] == count[i])
            answer.push_back(i+1);
    }
    //sort(answer.begin(),answer.end());
    return answer;
}
