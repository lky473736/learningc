#include <stdio.h>
#include <errno.h> // errno 변수를 사용하기 위해 추가

int main(void) {
    int str;
    FILE* fp = NULL;

    fp = fopen("text.txt", "r"); // 파일 열기 시도

    if (fp == NULL) { // 파일 열기 실패 시 에러 처리
        perror("파일을 열 수 없습니다");
        return 1;
    }

    while ((str = getc(fp)) != EOF) { // 파일 끝에 도달할 때까지 문자를 읽어
출력 putc(str, stdout);
    }

    fclose(fp);

    return 0;
}
