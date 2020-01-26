//IsPrimeNumber.c
/************************************************************
 * 파일    명칭 : IsPrimeNumber.c
 * 기        능 : 수를 입력받아 소수인지를 판별한다.
 * 작   성   자 : 채 종 홍
 * 작성    일자 : 2020-01-25
************************************************************/

#include <stdio.h>
#include <time.h>

typedef unsigned long int ULong;
typedef enum _boolean { FALSE, TRUE } Boolean;

ULong Input();
Boolean IsPrimeNumber(ULong number);
void Output(ULong number, Boolean isPrimeNumber);

int main(int argc, char *argv[]){
    ULong number;
    Boolean isPrimeNumber;
    clock_t start, finish;
    double duration;

    number = Input();

    start = clock();
    isPrimeNumber = IsPrimeNumber(number);
    Output(number, isPrimeNumber);
    finish = clock();

    return 0;
}

ULong Input(){
    ULong number;
    scanf("%d", &number);
    return number;
}

Boolean IsPrimeNumber(ULong number){   
    Boolean isPrimeNumber = FALSE;
    ULong factor = 0;
    ULong count = 0;
    ULong i = 1;
    ULong remainder;

    while(i <= number){
        factor++;
#if 0
        remainder = number;
        while(remainder >= factor){
            remainder = remainder-factor;
        }
#endif
        remainder = number % factor;
        if(remainder == 0){
            count++;
        }
        i++;
        if(count == 2){
            isPrimeNumber=TRUE;
        }
    }
    return isPrimeNumber;
}

void Output(ULong number, Boolean isPrimeNumber){
    if(isPrimeNumber == TRUE){
        printf("%d는 소수입니다.\n", number);
    }else{
        printf("%d는 합성수입니다.\n", number);
    }
}