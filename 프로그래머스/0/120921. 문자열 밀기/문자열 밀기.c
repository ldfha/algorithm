#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char *A, const char *B)
{
    int answer = 0;
    bool same = false;
    int end = strlen(A) - 1;
    char *temp = (char *)malloc(strlen(A) * sizeof(char));
    strcpy(temp, A);

    if (strcmp(temp, B) == 0)
    {
        return 0;
    }

    for (int i = 0; i < strlen(A); i++)
    {
        char end_letter = temp[end];
        for (int j = end; j > 0; j--)
        {
            temp[j] = temp[j - 1];
        }
        temp[0] = end_letter;
        if (strcmp(temp, B) == 0)
        {
            same = true;
            answer++;
            break; // 두 문자열이 같으면 반복문 탈출
        }
        answer++;
    }
    if (same)
    {
        return answer;
    }
    else
    {
        return -1;
    }
}