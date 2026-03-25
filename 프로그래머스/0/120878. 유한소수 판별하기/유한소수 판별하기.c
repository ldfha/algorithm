#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int GCD(int a, int b){
    while(b != 0){
        int r = a % b;
        if(r == 1) return 0;
        a = b;
        b = r;
    }
    return a;
}

int solution(int a, int b) {
    int answer = 0;
    int gcd = GCD(a, b);
    if(gcd != 0){   // 기약분수가 아니면
        a = a / gcd;
        b = b / gcd;
    }
    if(b == 1) {answer = 1;}    // 주어진 분수가 정수이면
    else{
        while(b != 1){
            if(b % 2 == 0){
                b /= 2;
            }
            else if(b % 5 == 0){
                b /= 5;
            }
            else{
                return 2;
            }
        }
    answer = 1;
    }
    return answer;
}