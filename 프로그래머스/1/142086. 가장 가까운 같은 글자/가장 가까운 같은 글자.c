#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(strlen(s) * sizeof(int));
    int len = strlen(s);
    int check[26];
    for (int i = 0; i < 26; i++) {
        check[i] = -1;
    }
    for(int i = 0; i < len; i++){
        unsigned char c = (unsigned char)s[i] - 97;
        answer[i] = (check[c] == -1) ? -1 : i - check[c];
        check[c] = i;
    }
    // answer[0]=-1;
    // for(int i=1; i<strlen(s); i++){
    //     char c = s[i];
    //     for(int j=0; j<i; j++){
    //         if(s[j] == c){
    //             if(answer[i]==0){
    //                 answer[i]=i-j;
    //             } else {
    //                 answer[i] = (answer[i] > i - j)? i-j : answer[i];
    //             }
    //         }
    //     }
    //     if(answer[i] == 0) {answer[i] = -1;}
    // }
    return answer;
}