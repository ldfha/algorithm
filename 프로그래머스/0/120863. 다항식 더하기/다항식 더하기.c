#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* polynomial) {
    int sangsu = 0;
    int gyesu = 0;
    char* temp = malloc(strlen(polynomial) + 1);
    strcpy(temp, polynomial);
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* token = strtok(temp, " ");
    while(token != NULL){
        if(strcmp(token, "+") != 0){
            if(token[strlen(token)-1] != 'x') {
                sangsu += atoi(token);
            } else {
                if(strcmp(token, "x") == 0){
                    gyesu += 1;
                } else {
                    token[strlen(token)-1] = '\0';
                    gyesu += atoi(token);
                }
                // char* su = malloc(strlen(token));
                // strncpy(su, token, strlen(token)-1);
                // su[strlen(token)-1] = '\0';
                // if(atoi(su)){
                //     gyesu += atoi(su);
                // } else{
                //     gyesu += 1;
                // }
            }
        }
        token = strtok(NULL, " ");
    }
    char* answer = (char*)malloc(50);
    if(gyesu == 1){
        if(sangsu != 0){
            sprintf(answer, "x + %d", sangsu);
        } else if(sangsu == 0){
            answer = "x";
        }
    } else if(gyesu != 0){
        if(sangsu != 0){
            sprintf(answer, "%dx + %d", gyesu, sangsu);
        } else if(sangsu == 0){
            sprintf(answer, "%dx", gyesu);
        }
    } else {
        sprintf(answer, "%d", sangsu);
    }
    
    return answer;
}