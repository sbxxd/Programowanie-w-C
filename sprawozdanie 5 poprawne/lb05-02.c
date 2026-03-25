#include <stdio.h>
#include <math.h>


#define PI 3.14


int main() {
	
    float r;
	
    printf("Podaj dlugość  promienia do obliczenia pola kola:");
	scanf_s("%f", &r);
	
    if (r > 0) {
        float pole = PI * r * r;
		printf("\nPole kola o promieniu %f wynosi: %.2f\n", r, pole);
		
	}
	else {
		printf("\nPromien nie może byc ujemny lub rowny 0\n");
	}
}