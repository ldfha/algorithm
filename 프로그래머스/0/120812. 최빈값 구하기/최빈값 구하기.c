#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int list[1001] = {0};
    for(int i=0;i<array_len;i++){
        list[array[i]] += 1;
    }
    int max = 0;
    int index = 0;
    bool isduple = false;
    for(int i=0;i<1000;i++){
        if(list[i]==0) continue;
        
        if(max < list[i]){
            max = list[i];
            index = i;
            isduple = false;    // 값이 바뀌면 다시 false
        }
        else if(max == list[i]) {
            isduple = true; 
        }
    }
    if(isduple) answer = -1;
    else answer = index;
    return answer;
}