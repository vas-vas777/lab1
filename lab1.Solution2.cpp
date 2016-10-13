#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

int main()
{    
	int p,xA,xB,xC,p2;    
	char A,B,C;
	p = 0; p2 = 0; 
	printf("xA= ");scanf_s("%d", &xA);scanf_s("%c", &A); 
	printf("xB= ");scanf_s("%d", &xB);scanf_s("%c", &B);    
	printf("xC= ");scanf_s("%d", &xC);scanf_s("%c", &C); 
        if (xB-xA>0)  
	    p=xB-xA;  
        else p=xA-xB;   
        if (xC-xA>0)        
            p2=xC-xA;    
        else p2=xA-xC;    
        if (p>p2)       
            printf("p2=%d %c",p2,C);    
        else printf ("p=%d %c",p,B);  
	_getch();
	return 0;
}

