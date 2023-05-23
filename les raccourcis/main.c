#include <stdio.h>
#include <stdlib.h>

int main()
{

   int nombre=0;
   printf("ecrire un nombre");
   scanf("%d",&nombre);
   nombre++;
   nombre *=3;
   nombre /=2;
   nombre -=1;
   printf("le resultat est %d",nombre);
    return 0;
}
