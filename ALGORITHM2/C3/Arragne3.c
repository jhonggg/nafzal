// Arrang3.c
/**********************************************************************************
파일  이름 : Arrange3.c
기      능 : 세 수를 입력받아 내림차순으로 출력한다.
작  성  자 : 채 종 홍
작성  일자 : 2020-02-01
***********************************************************************************/
#define MAX 3
#define CNT 2

typedef signed long int Long;

#include<stdio.h>

int main(int argc, char *argv[]);
void Input(Long **numbers);
void Arrage(Long **numbers);
void Output(Long numbers);

int main(int argc, char *argv[]){
    Long numbers;
    
    Input(numbers);
    Arrange(numbers);
    Output(numbers);

    return 0;
}
void Input(Long **numbers){
    numbers = malloc(sizeof(Long));
}
void Arrage();
void Output();
