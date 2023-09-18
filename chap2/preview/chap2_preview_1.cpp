/*
  statement : 문장
  printf(), scanf_s() : 제어 문자열과 인수가 필요

  제어 문자열 = 서식 지정자 = %변환 지시자 

  semicolon != seperator (하나의 c언어 statement를 알려주는 기호)

  함수 괄호 안의 내용 (정보) = argument (인수)
  함수 호출 : 명칭 및 인수가 필요
  CPU -> printf() -> stdio.h > printf() 찾음 및 스캔 -> 링크 -> main()으로 복귀

  데이터 형 : int, long, short, chat, float, double, unsigned : 기본형 / 구조형
  
  bit : 2진수 체계, 0/1 / 컴퓨터 (H/W)에서 기본 단위
  byte : 8 bit, 데이터 2^8개 표현 가능 / 시스템 (S/W)에서 기본 단위

  첫번째 bit : MSB 
  마지막 bit : LSB
*/
#include <stdio.h>

int main() {
    printf ("\n college \t univ \n");
    printf ("\n college    univ \n");
}
