#include <stdio.h>
#include <string.h>

struct list // visual studio 22에서는 const char 붙여야 함
{
    char name[10]; // char *name과 구분해서 사용해야 함
    int no;
};

int main()
{
    struct list k;
    
    /*k.name[0] = 'l'; 
    k.name[1] = 'e';
    k.name[2] = 'e';
    k.name[3] = '\0';*/
    
    strcpy(k.name, "lee"); // char name[10]으로 할 때 이렇게
    
    k.no = 100;
    
    printf ("%s %d", k.name, k.no);
    
    return 0;
}

/* 복습
구조체와 배열의 차이점은, 다양한 데이터형을 저장함에 있다.
배열은 각 component들이 서로 같은 데이터형을 가진다. 다른 데이터형을 가지지 않는다.
구조체는 각 변수들이 서로 다른 데이터형을 가질 때, 변수들을 한번에 일괄 관리하기 위해 만들어진 자료구조이다.

strcpy(a, b)는 b를 a에 복사하기 위한 string.h의 함수이다.

보통은 구조체 안에서 문자열을 정의할 때 동적 할당으로 인하여 문자형 포인터 변수를 사용한다. (누가 문자열 배열을 사용하는가?)
*/
