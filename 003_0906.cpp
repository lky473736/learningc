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
 
