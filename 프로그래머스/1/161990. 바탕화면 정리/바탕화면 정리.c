#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// wallpaper_len은 배열 wallpaper의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* wallpaper[], size_t wallpaper_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(4*sizeof(int));
    int len = strlen(wallpaper[0]);
    int x_max = 0, y_max = 0;
    int x_min = wallpaper_len, y_min = len;
    for(int i = 0; i < wallpaper_len; i++){
        for(int j = 0; j < len; j++){
            if(wallpaper[i][j] == '#'){
                y_min = (j < y_min) ? j : y_min ;
                y_max = (j > y_max) ? j : y_max ;     
                x_min = (i < x_min) ? i : x_min;
                x_max = (i > x_max) ? i : x_max;
            }
        }
    }
    answer[0] = x_min, answer[1] = y_min;
    answer[2] = x_max+1, answer[3] = y_max+1;
    return answer;
}