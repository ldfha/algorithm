#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isCorrect(char* temp){
    int len = strlen(temp);
    bool isPair = false;
    char c = temp[0];
    
    // 처음부터 닫는 괄호가 나오면 false를 리턴한다.
    if(c == ')' || c == '}' || c == ']'){
        return false;
    }

    char stack[len];
    int top = -1;   // stack이 비어있으면 -1
    int i = 0;
    while(i < len){
        c = temp[i];
        
        // 여는 괄호면 스택에 쌓는다.
        if(c == '(' || c == '{' || c == '['){
            stack[++top] = c;
        } else {
        // 닫는 괄호라면 pop해서 짝이 맞는지 조사한다
            if(top == -1) return false;
            char last = stack[top--];
            switch(c) {
                case ')':
                    if (last != '(') return false;
                    break;
                case '}':
                    if (last != '{') return false;
                    break;
                case ']':
                    if (last != '[') return false;
                    break;
            }
        }
        i++;
    }
    if(top == -1){
        return true;
    } else {return false; }
}

char* shift(char* temp){
    char* res = malloc((strlen(temp) + 1) * sizeof(char));;
    char init = temp[0];
    strcpy(res, temp+1);
    res[strlen(temp) - 1] = init;
    res[strlen(temp)] = '\0';
    return res;
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    char* temp = malloc((strlen(s) + 1) * sizeof(char));
    strcpy(temp, s);
    for(int i = 0; i < strlen(s); i++){
        temp = shift(temp);
        answer = isCorrect(temp) ? answer + 1 : answer;
    }
    
    free(temp);
    return answer;
}