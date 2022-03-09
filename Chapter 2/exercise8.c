#include <stdio.h>
void one_three();
void two();
int main()  {
printf("Начинаем:\n");
one_three();
printf("Порядок!\n");
return 0;   }
void one_three()    {
printf("Один\n");
two();
printf("Три\n");  }
void two()  {
printf("Два\n");    }
