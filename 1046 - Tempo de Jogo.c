#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo,hora_total,hora_inicial,hora_final;

    scanf("%d %d", &hora_inicial, &hora_final);

    hora_total = 24;


    if(hora_inicial >= hora_final ){
        tempo = hora_total - hora_inicial + hora_final;
    }else{
        tempo = hora_final - hora_inicial;
    }

    printf("O JOGO DUROU %d HORA(S)\n",tempo);

    return 0;
}
