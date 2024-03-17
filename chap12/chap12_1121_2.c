#include <stdio.h>

int main()
{
  char c;

  // stdin : 키보드로 입력
  // stdout : 화면에 출력
  while((c = fgetc(stdin)) != EOF) // getchar() == getc(stdin) == fget(stdin)
    {
      fputc(c, stdout); // putchar() == putc(인자, stdout) == fputc(인자,
stdout)

    // 섞어서 써도 됨
    // ex) getchar(), putc(인자, stdout) ...
    }
  return 0;
}
