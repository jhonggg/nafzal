// Arrang2.c
/**********************************************************************************
파일  이름 : Arrange2.c
기      능 : 세 수를 입력받아 내림차순으로 출력한다.
작  성  자 : 채 종 홍
작성  일자 : 2020-01-31
***********************************************************************************/
#include<stdio.h>
#include<time.h>

typedef signed long int Long;

int main(int argv, char *argc[]);
void Input(Long *firstNumber, Long *secondNumber, Long *thirdNumber);
void Arrage(Long firstNumber, Long secondNumber, Long thirdNumber,
            Long *largeNumber, Long *middleNumber, Long *smallNumber);
void Output(Long firstNumber, Long secondNumber, Long thirdNumber);

int main(int argv, char *argc[]){

    Long firstNumber=0, secondNumber=0, thirdNumber=0;
    Long largeNumber=0, middleNumber=0, smallNumber=0;

    Input(&firstNumber, &secondNumber, &thirdNumber);
    Arrage(firstNumber, secondNumber, thirdNumber, &largeNumber, &middleNumber, &smallNumber);
    Output(largeNumber, middleNumber, smallNumber);

    return 0;
}
void Input(Long *firstNumber, Long *secondNumber, Long *thirdNumber){
    
    printf("please write 3 number : ");
    scanf("%d %d %d", firstNumber, secondNumber, thirdNumber);

}
void Arrage(Long firstNumber, Long secondNumber, Long thirdNumber,
            Long *largeNumber, Long *middleNumber, Long *smallNumber){

    Long temp = 0;

    *largeNumber = firstNumber;
    *middleNumber = secondNumber;
    *smallNumber = thirdNumber;

    if(*largeNumber < *middleNumber){
        temp = *largeNumber;
        *largeNumber = *middleNumber;
        *middleNumber = temp;
    }
    if(*largeNumber < *smallNumber){
        temp = *largeNumber;
        *largeNumber = *smallNumber;
        *smallNumber = temp;
    }
    if(*middleNumber < *smallNumber){
        temp = *middleNumber;
        *middleNumber = *smallNumber;
        *smallNumber = temp;
    }    
}

void Output(Long largeNumber, Long middleNumber, Long smallNumber){
    printf("largeNumber : %d, middleNumber : %d, smallNumber : %d\n", largeNumber, middleNumber, smallNumber);
}
