#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()
{
	 setlocale(LC_ALL,"portuguese");
 
  char login[] = "Aluno";
  char senha[] = "uni9";
  printf("Login: \n");
  gets(login);
  printf("Senha: \n");
  gets(senha);
   	   if (login == login && senha == senha){
       printf("acesso liberado");
    } else{
       printf("Usuário ou senha inválidos"); 
    }
   
   
   
   return 0;
}
