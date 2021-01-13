#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <math.h>
using namespace std;
bool isPrime(int num)
{
    if(num < 2) return false;
    for(int i = 2; i <= sqrt(num); i++)
        if(num % i == 0) return false;
    return true;
}


int solution(string numbers) {
    int answer=0;
    //어떻게 나누어서 -> 붙이지??
    //일단 나누자
    vector<bool> p;
    set<int> s;

    sort(numbers.begin(), numbers.end(), greater<int>());
    int maxVal = stoi(numbers);
     p.resize(maxVal+1, 0);
    sort(numbers.begin(), numbers.end()); 

    for(int i = 1; i <= maxVal; i++) 
        p[i] = isPrime(i);

    do {
        for(int i = 1; i <= numbers.size(); i++) {
            int tmp = stoi(numbers.substr(0, i));
            if (p[tmp])
                s.insert(tmp);
        }
    } while(next_permutation(numbers.begin(), numbers.end())); //순열을 반환한다.

    return s.size();
}
