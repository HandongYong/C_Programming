#include <stdio.h>
int main()
{

float a =3.141592f; //f를 붙여주는 이유 -> double과 혼동할 수 있음
double b = 3.141592;
int c=123456;
printf("a: %.20f\n",a);
printf("b: %5d\n",c);//%f의 등장

printf("c: %6.8f",b); //소수점을 붙여주어야함

return 0;

}