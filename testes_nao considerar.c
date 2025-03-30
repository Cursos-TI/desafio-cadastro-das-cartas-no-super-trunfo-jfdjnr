#include <stdio.h>

int main(){

    int a = 12, c = 10, d = 12 ;
    int b = 11, e = 11, f = 11;
    int res1, res2, res3;
    unsigned int carta;

    res1 = a > b;
    carta = (b > a) + 1;
    //printf("%u\n", carta);
    printf ("População: Carta %u venceu (%d)\n\n", carta, res1);
 
    res2 = c > e;
    carta = (c < e) + 1;
    //printf("%u\n", carta);
    printf ("População: Carta %u venceu (%d)\n\n", carta, res2);

    res3 = d > f;
    carta = (f > d) + 1;
    //printf("%u\n", carta);
    printf ("População: Carta %u venceu (%d)\n\n", carta, res3);




    return 0;
}