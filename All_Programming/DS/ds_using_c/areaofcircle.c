#include<stdio.h>

int main()
{
	float radius;
	double area;
	
	printf("\nEnter Radius of circle:");
	scanf("%f",&radius);
	
	area=3.14*(radius*radius);
	printf("%.2f",area);
	
}
