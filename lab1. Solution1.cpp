#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	int s, h2, a, b, h;  
	printf("a= ");scanf_s("%d", &a);  // ������ �������� ������ ��������������� a � b  
	printf("b= ");scanf_s("%d", &b);  // ����� �������� ������ h,������� ������� �� ������� a 
	printf("h= ");scanf_s("%d", &h);  // ���������� ����� ������(h2), ��������� �� ������ ������� ���������������
	s=h*a;  // ������� �������  
	h2=s/b; // ������� ������  
	printf("h2=%d",h2); // ������� �������� ������ 
	system("pause");
	return 0;
}

