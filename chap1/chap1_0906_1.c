//
//  main.c
//  practical_C
//
//  Created by 임규연 on 2023/09/06.
//

/*
 low-level language : machine-oriented language (binary)
 -> 컴파일 및 링크 과정 필요 없음
 
 assembly language : 기게어 명령에 대해 1:1로 대응 -> mnemonic화한 언어 (기호화한 언어)
 
 high-level language : c, c++, Java, script, App (human-oriented language)
 high-level language를 컴파일 및 링크 -> machine language -> 컴퓨터가 명령 수행 (실행)
 
 (IDE) 소스코드 == source program ->
 (compile - compiler) 기계어 (실행불가능) == object program ->
 (link - linkage editor) 기계어 (실행가능) == load module ->
 (load - loader) 실행 (주기억장치에서)
 
 * 명령어 수행 시 cpu가 기계어 명령 수행을 위해 cpu 내의 각 장치에 제어신호 전송 == microoperation
 
 MFC 기반 visual c++ -> windows
 
 객체 지향의 특징
 1) class : 하나 이상의 유사한 객체들을 모아 하나의 공통된 특성을 표현
 2) object : encapsulation + abstract : 필요로 하는 데이터 구조와 그 위에서 수행되는 함수를 가진 모듈
 3) inheritance (상속 - example : windows system에서 부모클래스는 windows)
 4) information hiding (모듈이나 정보가 너무 많아서 은폐 - 정보은폐)
 ...
 
 변수
 auto (내부 변수) : 하나의 함수 안에서만 사용, 스택
 static (정적 변수) : 주기억장치
 extern (외부 변수) : 다른 파일의 변수를 끌어와 사용
 register
 */

#include <stdio.h>

int main()
{
    printf ("hello, C programming\n");
    return 0;
}

/* 복습
프로그래밍의 기본적인 컴파일 후 실행 과정은 아래와 같다.
1) 사용자가 소스코드를 작성 - source program 
2) 소스코드 작성 후 compile - object program (compiler / 실행 불가능)
3) 실행 불가능한 파일을 실행 가능케 함 - link - load module (linkage editor / 실행 가능)
4) 실행 가능한 파일을 실행 - load

기본적으로 C언어는 범용 언어로써 다양한 표준 시스템 라이브러리와 자료구조를 제공한다.
대소문자를 구분하며, 개행 문자 등의 escape character가 내장되어 있다.
복잡한 변수들을 bind하여 사용할 수 있는 구조체와 공용체 시스템을 제공하여, 구조적 프로그래밍 용어라고도 불리운다.
C언어는 기본 입출력 함수를 제공하지 않기 때문에 표준 입출력 라이브러리 (stdio.h)를 선언하여 사용한다.
*/
