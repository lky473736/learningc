#include <errno.h>
#include <stdio.h>

// int ferror (FILE *fp)

int main()
{
  char c;
  FILE* fp;

  fp = fopen ("text.txt", "r");

  if (fp == NULL) { // 파일 열기 실패 시 에러 처리
      perror("파일을 열 수 없습니다");
      return 0;
  }

  // stdin : 키보드로 입력 (표준)
  // stdout : 화면에 출력 (표준)
  // 파일 포인터 : 파일을 입력 (일반)

  while((c = fgetc(fp)) != EOF) // getchar() == getc(stdin) == fget(stdin)
    {
      fputc(c, stdout); // putchar() == putc(인자, stdout) == fputc(인자,
stdout)

    // 섞어서 써도 됨
    // ex) getchar(), putc(인자, stdout) ...
    }
  return 0;
}
