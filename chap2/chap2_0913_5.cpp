// 0913 실습 5

  #include <stdio.h>

  int main()
{
  int i;
  char x;

  scanf_s ("%3d%*5d%c", &i, &x, 1); 

  printf ("i = %d\n", i);
  printf ("x = %d\n", x);

  return 0;
}
