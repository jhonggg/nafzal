// Evalute.java
/**************************************************************************
파일  명칭 : Evalute.java
기      능 : 입력하는 만큼 서명과 국어 영어 점수를 입력받고, 총점과 평균을
             계산하고, 평균을 기준으로 평가하고, 학생 성적을 출력하다.
함수  명칭 : main
출      력 : 통과여부
입      력 : 성명, 국어점수, 영어점수 
작  성  자 : 채 종 홍
작성  일자 : 2020/01/15
***************************************************************************/
package BASIC1.C13;

import java.util.Scanner;

public class Evalute{

    public static void main(String args){
        final float SUBJECTCOUNT = 2.0F;
        final float PASSINGAVERAGE = 70.0F;
        
        String isPassed;
        String name;
        int koreanScore;
        int englishScore;
        int sum;
        float average;
        int number = 0;
        // 참조변수 선언, 생성 그리고 초기화
        Scanner scanner = new Scanner(System.in);
        //1.1. 성명, 국어점수, 영어점수를 입력받는다.
        name = scanner.nextLine();
        koreanScore = scanner.nextInt();
        englishScore = scanner.nextInt();

        //1. 파일의 끝이 아닌 동안 반복한다.
        while(name.compareTo("exit") != 0){
            //1.2. 번호를 매기다.
            number++;
            //1.3. 총점을 구한다.
            sum = koreanScore + englishScore;
            //1.4. 평균을 구한다.
            average = sum/SUBJECTCOUNT;
            //1.5. 평가를 하다.
            if(average >= PASSINGAVERAGE){
                isPassed = "PASS";
            }else{
                isPassed = "FAIL";
            }
            //1.6. 성명, 국어점수, 영어점수, 총점, 평균 그리고 평가를 출력한다.
            System.out.println(
                "name : "+ name +
                "koreanScore : "+ koreanScore +
                "englishScore : "+ englishScore +
                "sum : "+ sum +
                "average : "+ average +
                "isPassed : "+ isPassed
            );
            //1.1. 성명, 국어점수, 영어점수를 입력받는다.
            name = scanner.nextLine();
            koreanScore = scanner.nextInt();
            englishScore = scanner.nextInt();
        }
        scanner.close();
        //2. 끝내다.
    }

}