#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(),phone_book.end());
    for(int i=0;i<phone_book.size();i++){
        for(int j=i+1;j<phone_book.size();j++){
            string s;
            s = phone_book[j].substr(0,phone_book[i].size());
           // cout << s << endl;
            if(phone_book[i] == s)
                return false;
        }
    }
    return true;
}
