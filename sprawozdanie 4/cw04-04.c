#include <stdio.h>
#include <math.h>

int main(){
	
	int a, b, c;
	float delta, x1,x2;
	
	printf("Podaj wspolczynniki a, b i c rownania kwadratowego.\n");
	printf("a=");
	scanf(" %d", &a);
	printf("\nb=");
	scanf(" %d", &b);
	printf("\nc=");
	scanf(" %d", &c);	
	
	if(a<0)
	{
		printf("\n Wspolczynnik a nie moze byc mniejszy od 0.\n");
		printf("a=");
		scanf(" %d", &a);
	}
	
	delta=(b*b)-4*(a*c);
	
	if(delta<0){
		
		printf("\nTo rownanie nie ma rozwiazan w zbiorze liczb rzeczywistych\n");
		
	}else if(delta==0){
	
		x1=((-b)/(2*a));
		printf("Pierwiastek rownania kwadratowego wynosi x=%f", x1);
		
	}else if(delta>0){
	
		x1=((-b+sqrt(delta))/(2*a));
	
		x2=((-b-sqrt(delta))/(2*a));
		
		printf("Pierwiastki rownania kwadratowego wynosza odpowiednio: \nx1=%f\nx2=%f\n", x1,x2);
		
	}
}