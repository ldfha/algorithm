#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// quiz_len은 배열 quiz의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* quiz[], size_t quiz_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(sizeof(char*)*quiz_len);
    for(int i=0; i<quiz_len; i++){
        char* temp = malloc(sizeof(char)*strlen(quiz[i]));
        strcpy(temp, quiz[i]);
        char* s1 = strtok(temp, " ");
        char* giho = strtok(NULL, " ");
        char* s2 = strtok(NULL, " ");
        strtok(NULL, " ");
        char* as = strtok(NULL, " ");
        int su1 = atoi(s1);
        int su2 = atoi(s2);
        int ans = atoi(as);

        if(strcmp(giho, "-") == 0){
            if(su1 - su2 == ans){
                answer[i]="O";
            }else {
                answer[i]="X";
            }
        } else {
            if(su1 + su2 == ans){
                answer[i]="O";
            }else {
                answer[i]="X";
            }
        }
        
        free(temp);
    }
    return answer;
}