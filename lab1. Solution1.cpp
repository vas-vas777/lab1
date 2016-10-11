#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main()
{
	int s, h2, a, b, h;  
	printf("a= ");scanf_s("%d", &a);  
	printf("b= ");scanf_s("%d", &b);   
        printf("h= ");scanf_s("%d", &h);  
	s=h*a;  
	h2=s/b;   
	printf("h2=%d",h2);  
	getch();
	return 0;
}

