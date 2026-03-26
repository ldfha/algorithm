#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = -1;
    long long int totalprice = (long long)price * count * (count + 1) / 2;
    if(totalprice > money){
        answer = totalprice - money;
    } else {
        answer = 0;
    }
    return answer;
}