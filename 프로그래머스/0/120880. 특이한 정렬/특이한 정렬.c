#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int abs_sort(const void *a, const void *b){
    int numa = *(int*)a;
    int numb = *(int*)b;
    int abs_a = abs(numa);
    int abs_b = abs(numb);
    if(abs_a < abs_b) return -1;
    else if(abs_b < abs_a) return 1;
    else {
        if (numa > numb) return -1;
        else if(numa < numb) return 1;
        else return 0;
    }
}
// numlist_len은 배열 numlist의 길이입니다.
int* solution(int numlist[], size_t numlist_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(numlist_len*sizeof(int));
    
    int* dist = (int*)malloc(numlist_len*sizeof(int));
    for(int i=0;i<numlist_len;i++){
        *(dist+i)=numlist[i]-n;
    }
    qsort(dist, numlist_len, sizeof(int), abs_sort);
    
    for(int i = 0; i<numlist_len; i++){
        *(answer + i) = *(dist + i) + n;
    }
    free(dist);
    return answer;
}