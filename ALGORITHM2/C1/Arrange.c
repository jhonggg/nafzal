// Arrange.c
/**********************************************************************************
파일  이름 : Arrange.c
기      능 : 세 수를 입력받아 내림차순으로 출력한다.
작  성  자 : 채 종 홍
작성  일자 : 2020-01-31
***********************************************************************************/
#include <stdio.h>

typedef signed long int Long;

int main(int argc, char* argv[]);
void input(Long* firstNumber, Long* secondNumber, Long* thirdNumber);
void Arrange(Long firstNumber, Long secondNumber, Long thirdNumber, 
	Long* largeNumber, Long* middleNumber, Long* smallNumber);
void Output(Long largeNumber, Long middleNumber, Long smallNumber);

int main(int argc, char* argv[]) {

	Long firstNumber = 0;
	Long secondNumber = 0;
	Long thirdNumber = 0;
	Long largeNumber = 0;
	Long middleNumber = 0;
	Long smallNumber = 0;

	input(&firstNumber, &secondNumber, &thirdNumber);
	Arrange(firstNumber, secondNumber, thirdNumber, &largeNumber, &middleNumber, &smallNumber);
	Output(largeNumber, middleNumber, smallNumber);
	return 0;
}

/**********************************************************************************
함수  이름 : input
기      능 : 사용자가 키보드로 세 개의 수를 입력한다.
입      력 : 첫 번째 수, 두 번째 수, 세 번째 수
출      력 : 없음
***********************************************************************************/
void input(Long* firstNumber, Long* secondNumber, Long* thirdNumber) {
	printf("Please write just 3 number : ");
	scanf_s("%d %d %d", firstNumber, secondNumber, thirdNumber);
}

/**********************************************************************************
함수  이름 : Arrange
기      능 : 입력 받은 세 개의 수를 내림차순으로 정렬한다.
입      력 : 첫 번째 수, 두 번째 수, 세 번째 수
출      력 : 큰 수, 중간 수, 작은 수
***********************************************************************************/
void Arrange(Long firstNumber, Long secondNumber, Long thirdNumber,
	Long* largeNumber, Long* middleNumber, Long* smallNumber) {

	if (firstNumber > secondNumber) {
		if (firstNumber > thirdNumber) {
			*largeNumber = firstNumber;
			if (secondNumber > thirdNumber) {
				*middleNumber = secondNumber;
				*smallNumber = thirdNumber;
			}
			else {
				*middleNumber = thirdNumber;
				*smallNumber = secondNumber;
			}
		}
		else {
			*largeNumber = thirdNumber;
			*middleNumber = firstNumber;
			*smallNumber = secondNumber;
		}
	}
	else {
		if (secondNumber > thirdNumber) {
			*largeNumber = secondNumber;
			if (firstNumber > thirdNumber) {
				*middleNumber = firstNumber;
				*smallNumber = thirdNumber;
			}
			else {
				*middleNumber = thirdNumber;
				*smallNumber = firstNumber;
			}
		}
		else {
			*largeNumber = thirdNumber;
			*middleNumber = secondNumber;
			*smallNumber = firstNumber;
		}
	}
	
}

/**********************************************************************************
함수  이름 : Output
기      능 : 큰 수, 중간 수, 작은 수를 모니터에 출력한다.
입      력 : 첫 번째 수, 두 번째 수, 세 번째 수
출      력 : 큰 수, 중간 수, 작은 수
***********************************************************************************/
void Output(Long largeNumber, Long middleNumber, Long smallNumber) {
	printf("큰 수 : %d, 중간 수 : %d, 작은 수 : %d\n", 
		largeNumber, middleNumber, smallNumber);
}