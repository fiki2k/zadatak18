//Zadatak je pronaci ostatak pri djeljenju 2 broja.

#include <stdio.h>
int main(){
   int br1, br2, kolicnik, ostatak;

   printf("Unesi broj: ");
   scanf("%d", &br1);

   printf("Unesi broj s kojim dijelimo: ");
   scanf("%d", &br2);

	// Operator / vraca kolicnik.
   kolicnik = br1 / br2;

   /* Modulo % vraca ostatak pri dijeljenju.
    */
   ostatak = br1 % br2;

   printf("Kolicnik je : %d\n", kolicnik);
   printf("Ostatak je: %d", ostatak);

   return 0;
}
