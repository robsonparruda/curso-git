#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int tempo, horas, horas_seg, minutos, segundos;

int main()
{
	 setlocale(LC_ALL,"portuguese");
   
   horas_seg=3600;

   printf("Entre com o número de segundos: ");
   scanf("%d", &tempo);

   horas = (tempo/horas_seg); 

   minutos = (tempo -(horas_seg*horas))/60;
   segundos = (tempo -(horas_seg*horas)-(minutos*60));
   
   printf("%dh : %dm :%ds \n",horas,minutos,segundos);
   
   return 0;
}
