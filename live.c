#include <stdio.h>
#include <stdlib.h>



int main(void) {

    // Indlæs to hændr i sten,saks, papir
    char spiller1,spiller2;

    printf("Spiller 1 angiv din hånd('r','p','s'):\n");
    scanf(" %c",&spiller1);
    printf("Spiller 2 angiv din hånd('r','p','s'):\n");
    scanf(" %c",&spiller2);

        if(!(spiller1 == 'r' || spiller1 == 's' || spiller1 == 'p')) {
            printf("Indtast nyt input\n");
            return EXIT_FAILURE;
        }
        if(!(spiller2 == 'r' || spiller2 == 's' || spiller2 == 'p')) {
            printf("Indtast nyt input\n");
            return EXIT_FAILURE;
        }

    // Beregn om spiller 1 har vundet
    int spiller1_har_vundet = (spiller1 == 'r' && spiller2 == 's') ||
                            (spiller1 == 'p' && spiller2 == 'r') ||
    (spiller1 == 's' && spiller2 == 'p');
    int udafgjort = (spiller1 == spiller2);

    // UDskriv om spiller 1 har vundet
    if(spiller1_har_vundet) {
        printf("Tillykke spiller 1 har vundet!\n");
    } else if (udafgjort) {
        printf("Den endte udafgjort\n");
    } else {
        printf("Spiller 2 har vundet\n");
    }

    return 0;
}
