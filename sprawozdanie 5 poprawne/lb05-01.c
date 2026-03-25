#include <stdio.h>
#include <math.h>
int main() {

	int n;
	unsigned long long liczba = 1;
	
    printf("Podaj liczbe: ");
	scanf("%d", &n);
	
    if (n < 0) {
		printf("\nNie ma silni z liczby ujemnej\n");
	}
	else if (n > 0) {
        	
        for (int i = 1; i <= n; i++) {
			liczba = liczba * i;
		}
		printf("\nSilnia z %d wynosi: %llu\n", n, liczba);
		
	}
	else {
    
            printf("\nSilnia z 0 wynosi 1");
	
    }
}