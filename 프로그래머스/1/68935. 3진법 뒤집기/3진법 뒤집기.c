#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int result=0, len=0;
    for(int i=n;i != 0;){
        answer = answer * 3 + i % 3;
        i /= 3;
    }
    return answer;
}