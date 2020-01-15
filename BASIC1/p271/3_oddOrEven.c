// 3_oddOrEven.c
// [주석 단락]
/*****************************************************************************
 * 파일  명칭 : 3_oddOrEven.c
 * 기      능 : 입력한 숫자의 짝수, 홀수 개수를 구하여 출력
 * 함수  명칭 : main
 * 출      력 : 짝수 개수, 홀수 개수
 * 입      력 : 입력된 숫자
 * 작  성  자 : 채 종 홍
 * 작성  일자 : 2020/01/15
*****************************************************************************/
// [전처리기  단락]
#include <stdio.h>

// [함수 선언 단락]
int main(int argc, char *argv[]);

// [함수 정의 단락]
int main(int argc, char *argv[]){
    
    int oddCount = 0;
    int evenCount = 0;
    int inputNumber;
    int number = 1;
    int remainder;
    
    //1.2. 번호를 입력한다.
    scanf("%s", &inputNumber);
    //1. 번호가 입력한 숫자보다 작거나 같으면 반복한다.
    while(number <= inputNumber){
        //1.3. 나머지를 계산한다.
        remainder = number - (number/2) * 2;
        //1.3. 짝수와 홀수를 판별한다.
        if(remainder == 0){
            //1.4. 짝수이면 짝수 개수를 증가한다.
            oddCount += 1;
        }else{
            evenCount += 1;
        }
        //1.1. 번호를 증가한다.
        number++;
    }
    //2. 짝수 개수와 홀수 개수를 출력한다.
    printf("짝수 개수 : %d 홀수 개수 : %d", oddCount, evenCount);
    //3. 끝낸다.
    return 0;
}