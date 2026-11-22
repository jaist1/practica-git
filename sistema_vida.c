#include <stdio.h>

int main(void) {
int vida = 100;
printf("Vida inicial: %d\n", vida);
int dano;
printf("Introduce el dano recibido: ");
scanf("%d", &dano);
int vidaRestante = vida - dano;
printf("Vida restante: %d\n", vidaRestante);

    return 0;
}