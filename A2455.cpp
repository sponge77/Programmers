#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// prices_len은 배열 prices의 길이입니다.
int* solution(int prices[], size_t prices_len) {
    int i,j;
    int *stop = (int*)malloc(sizeof(int)*prices_len);
    for(i=0;i<prices_len;i++){
        stop[i] = 0;
    }
    int *count = (int*)malloc(sizeof(int)*prices_len);
    prices[prices_len-1] = 0;
    for(i=0;i<prices_len;i++){
        for(j=i+1;j<prices_len;j++){
            if(prices[i] > prices[j]){
                stop[i] = 1;
                count[i] = j-i;
                break;
            }
        }
    }
    for(i=0;i<prices_len;i++){
        if(stop[i] == 0){
            count[i] = prices_len-1-i;
        }
    }

    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*prices_len);
    for(i=0;i<prices_len;i++){
        answer[i] = count[i];
    }

    return answer;
}

