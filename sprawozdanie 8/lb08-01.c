#include <stdio.h>
#include <math.h>

char odp;
float dlugosc = 0;

struct punkt {
    float x, y;
};

float odleglosc(struct punkt a, struct punkt b) {
    return sqrtf((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
}

int main() {

    struct punkt a;
    struct punkt b;

    do {
        printf("Podaj współrzędne pierwszego punktu:\nX: ");
        scanf("%f", &a.x);
        printf("Y: ");
        scanf("%f", &a.y);

        printf("\nPodaj współrzędne drugiego punktu:\nX: ");
        scanf("%f", &b.x);
        printf("Y: ");
        scanf("%f", &b.y);

        float d = odleglosc(a, b);

        printf("\n\nOdległość między tymi punktami wynosi: %.2f\n", d);

        printf("\nChcesz zaktualizować współrzędne punktów? T/N: ");
        scanf(" %c", &odp);
        
    } while (odp == 'T' || odp == 't');

    return 0;
}