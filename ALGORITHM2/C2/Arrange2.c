// Arrang2.c
/**********************************************************************************
파일  이름 : Arrange2.c
기      능 : 세 수를 입력받아 내림차순으로 출력한다.
작  성  자 : 채 종 홍
작성  일자 : 2020-01-31
***********************************************************************************/
#include<stdio.h>
#include<time.h>

typedef unsigned long int ULong;

int main(int argv, char *argc[]);
void Input(ULong *firstNumber, ULong *secondNumber, ULong *thirdNumber);
void Arrage(ULong firstNumber, ULong secondNumber, ULong thirdNumber,
            ULong *largeNumber, ULong *middleNumber, ULong *smallNumber);
void Output(ULong firstNumber, ULong secondNumber, ULong thirdNumber);

int main(int argv, char *argc[]){

    ULong firstNumber=0, secondNumber=0, thirdNumber=0;
    ULong largeNumber=0, middleNumber=0, smallNumber=0;

    Input(&firstNumber, &secondNumber, &thirdNumber);
    Arrage(firstNumber, secondNumber, thirdNumber, &largeNumber, &middleNumber, &smallNumber);
    Output(largeNumber, middleNumber, smallNumber);

    return 0;
}
void Input(ULong *firstNumber, ULong *secondNumber, ULong *thirdNumber){
    
    printf("please write 3 number : ");
    scanf_s("%d %d %d", firstNumber, secondNumber, thirdNumber);

}
void Arrage(ULong firstNumber, ULong secondNumber, ULong thirdNumber,
            ULong *largeNumber, ULong *middleNumber, ULong *smallNumber){

    *largeNumber = firstNumber;
    *middleNumber = secondNumber;
    *smallNumber = thirdNumber;
    
}

void Output(ULong largeNumber, ULong middleNumber, ULong smallNumber){

}
