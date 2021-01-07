#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> chk;

    for(int i = 0; i < progresses.size(); i++)
    {
        if(((100-progresses[i])%speeds[i]) == 0) chk.push_back(((100-progresses[i])/speeds[i]));
        else chk.push_back(((100-progresses[i])/speeds[i]) + 1);
    }

    int cnt = 0, maxNum = chk[0];
    for(int i = 0; i < chk.size(); i++)
    {
        if(chk[i] <= maxNum) cnt++;
        else
        {
            answer.push_back(cnt);
            maxNum = chk[i];
            cnt = 1;
        }

        if(i == chk.size()-1) answer.push_back(cnt);
    }

    return answer;
}
