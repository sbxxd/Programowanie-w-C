#include <stdio.h>
#include <math.h>
int main() {

	float a, b;
	
    
    printf("Podaj dlugość prostokata\n");
	scanf_s("%f", &a);
	
    
    if (a > 0) {
            
        printf("Podaj szerokość prostokta\n");
		scanf_s("%f", &b);
	
    
        if (b <= 0) {
			printf("Szerokosc prostokata nie moze byc ujemna lub rowna zero\n");
		}
		else {
	
            float pole = a * b;
			float obwod = (2 * a) + (2 * b);
			printf("Pole prostokąta dla dlugosci %f i szerokosci %f wynosi %.2f\n", a, b, pole);
			printf("Obwód prostokąta o dlugosci %f i szerokosci %f wynosi %.2f\n", a, b, obwod);
	
        }
	}
	
    else {
	
		printf("\nDługosc prostokata nie moze byc ujemna lub rowna zero\n");

	}
}