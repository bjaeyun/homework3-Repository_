#include<stdio.h>
#include<stdlib.h>
void main()
{
int **x; //이중 포인터
printf("----- [변재윤] [2022041046] -------\n\n");
printf("sizeof(x) = %lu\n", sizeof(x)); //x의 크기 출력
printf("sizeof(*x) = %lu\n", sizeof(*x)); //x가 가리키는 값의 크기 출력
printf("sizeof(**x) = %lu\n", sizeof(**x)); //x가 가리키는 값이 가리키는 값의 크기 출력
}