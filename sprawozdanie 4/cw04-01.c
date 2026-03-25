#include <stdio.h>


int main(){
	
	
	int i=1;
	printf("Potegowanie liczb od 1 do 12 petla for:\n");
	for(i=1; i<=12; i++){
		printf(" %d",i*i);
		printf(" %d,",i*i*i);
	}
	
	int a=1;
	
	printf("\nPotegowanie liczb od 1 do 12 petla while:\n");
	while(a<=12){
	
		printf(" %d",a*a);
		printf(" %d,",a*a*a);
		a++;
		
	}
	printf("\nPotegowanie liczb od 1 do 12 petla while:\n");
	int b=1;
	do{
		printf(" %d",b*b);
		printf(" %d,",b*b*b);
		b++;
	}while(b<=12);

	return 0;
}