// Evalute.c
/**************************************************************************
파일  명칭 : Evalute.c
기      능 : 입력하는 만큼 서명과 국어 영어 점수를 입력받고, 총점과 평균을
             계산하고, 평균을 기준으로 평가하고, 학생 성적을 출력하다.
함수  명칭 : main
출      력 : 통과여부
입      력 : 성명, 국어점수, 영어점수 
작  성  자 : 채 종 홍
작성  일자 : 2020/01/14
***************************************************************************/
//전처리기 단락
#include <stdio.h> // 외부 

#define SUBJECTCOCOUNT 2.0F
#define PASSINGAVERAGE 70.0F

// 함수 선언
int main(int argc, char* argv[]);

int main(int argc, char* argv[]){
    // 자동 변수 선언 및 정의
    char (*isPassed); // 문자 배열 포인터
    char name[11]; // 문자 배열
    int koreanScore;
    int englishScore;
    int sum;
    float average;
    int number = 0; // 초기화
    
    //  1.1. 성명, 국어점수, 영어점수를 입력받는다.
    scanf("%s %d %d", name, &koreanScore, &englishScore);
    
    while(!feof(stdin)){ //1. 파일의 끝이 아닌 동안 반복한다.
        //1.2. 번호를 매기다.
        //number = number + 1;
        //number+=1;
        number++;
        //1.3. 총점을 구한다.
        sum = koreanScore + englishScore;
        //1.4. 평균을 구한다.
        average = sum / SUBJECTCOCOUNT;
        //1.5. 평가를 하다.
        if(average >= PASSINGAVERAGE)
            isPassed = "PASS";
        else
            isPassed = "FAIL";
        //  1.6. 성명, 국어점수, 영어점수, 총점 그리고 평가를 출력한다.
        printf("name : %s koreaScore : %d englishScore : %d isPassed : %s", name, koreanScore, englishScore, isPassed);
    }
    //2. 끝내다.
    return 0;
}