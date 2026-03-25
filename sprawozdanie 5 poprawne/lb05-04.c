#include <stdio.h>
#include <math.h>


int main() {
	
    
    int max;
	
    printf("Podaj liczbe maksymalna:\n");
	scanf_s("%d", &max);
	printf("Liczby parzyste od 0 do %d:\n", max);
	
    
    for (int i = 1; i <= max; i++) {
		if (i % 2 == 0) {
			printf("%d\n", i);
		}
	}

	printf("\n");
}