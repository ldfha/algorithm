#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char* digit;
    char key[10];
} Dictionary; 

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    char* temp = malloc(strlen(s)+1);
    temp = strcpy(temp, s);
    Dictionary dict[10] = {
        {"0", "zero"},
        {"1", "one"},
        {"2", "two"},
        {"3", "three"},
        {"4", "four"},
        {"5", "five"},
        {"6", "six"},
        {"7", "seven"},
        {"8", "eight"},
        {"9", "nine"}
    };
    long long int answer = 0;
    for(int i=0; i<10; i++){
        char* p;
        char* word = dict[i].key;
        p = strstr(temp, word);   // temp에 영단어가 있는지 확인
        if(p == NULL){ continue; }  // 포함되어있지 않으면 continue
        
        while(p != NULL){
            memmove(p + 1, p+strlen(word) , strlen(p + strlen(word)) + 1);
            memcpy(p, dict[i].digit, 1);
            p = strstr(p + 1, word);   
            // 없을때까지 계속 찾기
        }
    }
    answer = (long long)atoi(temp);
    return answer;
}