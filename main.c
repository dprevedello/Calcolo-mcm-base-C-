#include <stdio.h>

int mcm(int n1, int n2);

int main(void) {
    int numero1, numero2;

    do {
        printf("Inserire il primo numero con il qualse si vuole calcolare l'mcm: ");
        scanf("%d", &numero1);
        if(numero1 <= 0)
            printf("ERRORE: per il calcolo dell'mcm il numero deve essere strettamente positivo.\n\n");
    } while(numero1 <= 0);

    do {
        printf("Inserire il secondo numero con il qualse si vuole calcolare l'mcm: ");
        scanf("%d", &numero2);
        if(numero2 <= 0)
            printf("ERRORE: per il calcolo dell'mcm il numero deve essere strettamente positivo.\n\n");
    } while(numero2 <= 0);

    printf("\nIl minimo comune multiplo fra %d e %d è %d\n", numero1, numero2, mcm(numero1, numero2));

    return 0;
}

int mcm(int n1, int n2){
    int a=n1, b=n2;
    if(n2>n1){ // In "a" c'è sempre il più grande tra n1 ed n2
        a=n2;
        b=n1;
    }

    for(int i=1; i<=a; i++)
        if(b*i % a == 0)
            return b*i;

    return 0; //TMCH
}