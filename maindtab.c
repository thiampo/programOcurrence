

#include<stdio.h>
#include "dtab.h"

int main(){
    
    int N , taillTab ;
    char c ;
do
{
    printf ("veuillez entrez la dimension du compris entre 2 et 50 tableau\n");
     taillTab=scanf ("%d",&N);//affecter la valeur a tailleTab
     while ((c=getchar())!='\n'&& c!=EOF);// bloquer les caractere
} while(N<2 || N>50);// fixe la dimension du tableau

     
int T[N] ;



tab1(T,N);// appele du fonction 

somme(T,N); // appelle du fonction somme 

tableauTrie(T,N); // appelle du fonction trie 
  div(T,N) ;

    
    
    return 0 ;
}