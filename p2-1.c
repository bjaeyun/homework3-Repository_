#include <stdio.h>
#define MAX_SIZE 100
float sum1(float list[], int); 
float sum2(float *list, int); 
float sum3(int n, float *list); 
float input[MAX_SIZE], answer;
int i;
void main(void)
{
for(i=0; i < MAX_SIZE; i++) // 배열 input을 0부터 MAX_SIZE - 1까지의 숫자로 초기화
input[i] = i;
/* for checking call by reference */
printf("----- [변재윤] [2022041046] -------\n\n");
printf(" sum1(input, MAX_SIZE) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input);
answer = sum1(input, MAX_SIZE); //answer에 sum1함수 호출한 후 저장
printf("The sum is: %f\n\n", answer);
printf("--------------------------------------\n");
printf(" sum2(input, MAX_SIZE) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input);
answer = sum2(input, MAX_SIZE); //answer에 sum2함수 호출한 후 저장
printf("The sum is: %f\n\n", answer);
printf("--------------------------------------\n");
printf(" sum3(MAX_SIZE, input) \n");
printf("--------------------------------------\n");
printf("input \t= %p\n", input);
answer = sum3(MAX_SIZE, input); //answer에 sum3함수 호출한 후 저장
printf("The sum is: %f\n\n", answer);
}
float sum1(float list[], int n) { // 배열을 인수로 사용하고 합계를 반환하는 함수 정의
printf("list\t= %p\n", list);//list의 주소
printf("&list\t= %p\n\n", &list);//list의 시작 주소
int i;
float tempsum = 0;
for(i = 0;i < n;i++)
tempsum += list[i];
return tempsum;
}
float sum2(float *list, int n) { // 배열에 대한 포인터를 인수로 사용하고 합계를 반환하는 함수 정의
printf("list\t= %p\n", list);//list의 주소
printf("&list\t= %p\n\n", &list);//list의 시작 주소
int i;
float tempsum = 0;
for(i = 0;i < n; i++)
tempsum += *(list +i);
return tempsum;
}
/* stack variable reuse test */
float sum3(int n, float *list) {
printf("list\t= %p\n", list);//list의 주소
printf("&list\t= %p\n\n", &list);//list의 시작 주소
int i;
float tempsum = 0;
for(i = 0; i < n; i++)
tempsum += *(list +i);
return tempsum;
}