// Arrang3.c
/**********************************************************************************
파일  이름 : Arrange3.c
기      능 : 세 수를 입력받아 내림차순으로 출력한다.
작  성  자 : 채 종 홍
작성  일자 : 2020-02-01
***********************************************************************************/
#include<stdio.h>

#define MAX 3

typedef signed long int Long;
typedef unsigned long int ULong;

int main(int argc, char *argv[]);
void Input(Long (*numbers));
void Arrage(Long (*numbers));
void Output(Long *(numbers));

int main(int argc, char *argv[]){
    Long numbers[MAX];
    Input(numbers);
    Arrage(numbers);
    Output(numbers);
    return 0;
}
void Input(Long (*numbers)){
    ULong i;
    printf("세 번 수를 입력하시오.\n");
    for(i=0; i < MAX; i++){
        scanf("%d", numbers+i);
    }
}
void Arrage(Long (*numbers)){
    ULong i, j;
    Long temp;
    for(i=0; i<MAX-1; i++){
        for(j=i+1; j<MAX; j++){
            if(numbers[i] < numbers[j]){
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
}
void Output(Long *(numbers)){
    ULong i;
    for(i = 0; i <MAX; i++){
        printf("%d\n", numbers[i]);
    }
}