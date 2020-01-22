//c1_q3_animalCount.c
/**************************************************************************
 * 파일   명칭 : c1_q3_animalCount.c
 * 기       능 : 송아지와 닭이 섞여 있는데 머리는 모두 46, 다리는 140개 일때의 각각 동물의 마리 계산
 * 함수   명칭 : main
 * 출       력 : 송아지 수, 닭 수
 * 입       력 : 없음
 * 작   성  자 : 채 종 홍
 * 작성   일자 : 2020/01/22
 * 참고   자료 : https://jaimemin.tistory.com/261
**************************************************************************/
#include<stdio.h>
#include<stdlib.h>

#define NUMBER 2
#define INFO 3

void gaussJordan(double head, double heads, double g_foots, double c_foots, double foots);
int main(int argc, char* argv[]) {

	double greets, chickens;
	double g_foots = 4, c_foots = 2;
	double head = 1;
	double heads = 46, foots = 140;

	//1.송아지 수와 닭 수를 구한다.
	//1.1. 가우스 조던 소거법을 실행한다.
	printf("GaussJordan\n\n");
	gaussJordan(head, heads, g_foots, c_foots, foots);
	//2. 송아지 수와 닭 수를 출력한다.
	//3. 끝낸다.
	return 0;
}

void gaussJordan(double head, double heads, double g_foots, double c_foots, double foots) {
	//1.1.1. Augmented matrix 형태로 만든다.
	double animal[NUMBER][INFO] = { {head,head,heads},
									{g_foots, c_foots, foots} };
	double divider;
	double multiple;
	double tempMatrix[NUMBER][INFO] = {0,0,0,0,0,0};
	double swapMatrix[NUMBER][INFO] = {0,0,0,0,0,0};
	double animal2[NUMBER][INFO] = {0,0,0,0,0,0};
	printf("Row1 Scaling and Substract\n");
	for (int i = 0; i < NUMBER; i++) {
		//1.1.2. 행렬 1의 scaling
		for (int j = 0; j < INFO; j++) {
			divider = animal[i][0];
			animal[0][j] = animal[0][j] / divider;
			//1.1.3. 행렬 2와 행렬 1의 subtract
			multiple = animal[NUMBER-1][0];
			tempMatrix[i][j] = animal[i][j] * multiple;
			swapMatrix[i][j]=tempMatrix[NUMBER-i-1][j];
			animal[i][j]-=swapMatrix[i][j];
			animal2[i][j]=animal[i][j];
			printf("%.lf ", animal2[i][j]);
		}
		printf("\n");
	}

	printf("Row2 Scaling and Substract\n");
	for (int i = 0; i < NUMBER; i++) {
		//1.1.2. 행렬 1의 scaling
		for (int j = 0; j < INFO; j++) {
			divider = animal2[NUMBER-1][1];
			printf("%d %d", i, j);
			printf("\n");
			animal2[NUMBER-1][j] = (animal2[NUMBER-1][j] / divider);
			//1.1.3. 행렬 2와 행렬 1의 subtract
			/*
			multiple = animal[NUMBER-1][0];
			tempMatrix[i][j] = animal[i][j] * multiple;
			swapMatrix[i][j]=tempMatrix[NUMBER-i-1][j];
			animal[i][j]-=swapMatrix[i][j];
			*/
			printf("%.lf ", animal2[i][j]);
		}
		printf("\n");
	}
}
