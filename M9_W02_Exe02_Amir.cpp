//M9_W02_Exe02_Amir

#include<stdio.h>
#define pi 3.1415

int main()
{	
	float v, r;	
	printf("Enter the radius of the sphere:\n");
	scanf("%f", &r);
	v = (4/3.0)*pi*r*r*r;
	printf("Volume of the sphere is %.2f", v);
}
