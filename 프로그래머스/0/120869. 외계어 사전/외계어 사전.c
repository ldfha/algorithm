#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// spell_len은 배열 spell의 길이입니다.
// dic_len은 배열 dic의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* spell[], size_t spell_len, const char* dic[], size_t dic_len) {
    int answer = 2;
    bool isIn = true;
    int i = 0;
    for(i; i < dic_len; i++){
        int word_len = strlen(dic[i]);
        for(int k = 0; k < spell_len; k++){
            isIn = false;
            for(int j = 0; j < word_len; j++){
                if (dic[i][j] == spell[k][0]){
                    isIn = true;
                    break;
                }
            }
            if(!isIn) {break;}
        }
        if(isIn){
            answer = 1;
        }
    }

    return answer;
}