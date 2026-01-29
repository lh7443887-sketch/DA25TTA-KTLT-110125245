#include <stdio.h>
int main ()
{
	int a,b;
	printf ("Nhap a= ");
	scanf("%d",&a);
	printf ("Nhap b= ");
	scanf("%d",&b);
		
	int tong;
	tong=a+b;
	printf("\nTong : %d",tong);
	
	int hieu;
	hieu=a-b;
	printf("\nHieu : %d",hieu);
	
	int tich=1;
	hieu=a*b;
	printf("\nTich : %d",tich);
	
	float thuong;
	thuong=1.0*a/b;
	printf("\nThuong : %f",thuong);
	
	
	
	
	
	
	
	
	return 0 ;
}