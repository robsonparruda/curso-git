#include <stdio.h>
#include <stdlib.h>

int AnoNasc, AnoAtual, Result;

main(){
   printf(“Digite o ano de seu nascimento: \n”);
   scanf(“%d”, &AnoNasc);
   printf(“Digite o ano atual: \n”);
   scanf(“%d”, &AnoAtual);
   Result = AnoAtual - AnoNasc;
   printf(“Sua idade é: %d”, Result”);
   system(“pause”);
}