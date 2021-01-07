#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int count=0;
    for(int i=3;i<=10000;i++){
        for(int j=3;j<=10000;j++){
            if(count== 1) break;
            if((((i-2)*(j-2)) == yellow) && ((i*j-yellow) == brown)){

                answer.push_back(i);
                answer.push_back(j);
                count++;

            }else continue;


        }
        if(count==1)
        break;
    }
    if(answer[0] < answer[1]) 
        swap(answer[0],answer[1]);
    //sort(answer.end(), answer.begin());

    return answer;
}
