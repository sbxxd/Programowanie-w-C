#include <stdio.h>
#include <math.h>

int main(){
	
	int a=2,b=7,c=-4;
	
	
	float delta=b*b-4*a*c, x1,x2;
	
	x1=((-b-sqrt(delta))/(2*a));
	x2=((-b+sqrt(delta))/(2*a));
	
	printf("Pierwiastki rownania kwadratowego w postaci:  %dx^2 + %dx %d\n\n", a,b,c);
	printf("Wynosza odpowiednio: \nx1=%f\nx2=%f\n", x1,x2);
}