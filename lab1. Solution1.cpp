#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main()
{
	int s, h2, a, b, h;  
	printf("a= ");scanf_s("%d", &a);  // вводим значения сторон параллелограмма a и b  
	printf("b= ");scanf_s("%d", &b);  // задаём значение высоте h,которая опущена на сторону a 
	printf("h= ");scanf_s("%d", &h);  // Необхадимо найти высоту(h2), опущенную на вторую сторону параллелограмма
	s=h*a;  // находим площадь  
	h2=s/b; // искомая высота  
	printf("h2=%d",h2); // выводим значение высоты 
	system("pause");
	return 0;
}

