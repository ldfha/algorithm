#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    int s, e;
    if(a > b){ s = b; e = a;}
    else{s=a; e=b;}
    
    for(int i=s;i<=e;i++){
        answer+=i;
    }
    return answer;
}