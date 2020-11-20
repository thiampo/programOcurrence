#include<stdio.h>
int tab1(int T[],int A){
    int i ,j ,m;
    int valeur = 0 ; 
    char f ;
   
        for(i = 0; i<A; i++){
            do
            {
                if(valeur==0)
                    printf("veuillez entre une valeur tab[%d]\n ",i);
        
                else
                    printf("veuillez entre une valeur entier tab[%d]\n",i);
                scanf("%d",&T[i]);
                valeur++ ;
            }while ((f=getchar())!='\n'&& f!=EOF);
        } 
            
 
 
     


       // ocurrence 
       for(i=0;i<A;i++){
           for(j=i+1;j<A;){

               if(T[i]==T[j] && T[i]==0){
                   for(m=j;m<A;m++){
                       T[m]=T[m+1];
                   }A--;
               }j++;
           }
       }
    // occurence
  
  printf("le tableaux final est:\n") ;
  for(int i=0 ;i<A ;i++){
          
           printf("%d\t",T[i]) ;
       } 
    
         printf("\n") ;
     // inverse 

      printf("Rangement du tableau dans l'ordre inverse:\n");
       
        for(i=A-1; i>=0 ;i--){ 
           printf("%d\t",T[i]) ;
       } 
         printf("\n") ;

  
      
return 0 ;
}


int somme( int T[] ,int A){

int som = 0 ;
for (int i = 0; i < A; i++)
{
    som = som + T[i] ;
}
printf("la somme des tableaux est : %d\n",som) ;




    return 0 ;
}


int tableauTrie(int T[],int A){
    int TPOS[A]  ;
    int TNEG[A]  ;
    int Kneg=0,Kpos=0;
  
    for(int i=0 ;i<A ;i++){
    if (T[i]<0)
    {
    TNEG[Kneg] = T[i]  ;
        Kneg++ ;
    }else
    {
        TPOS[Kpos] = T[i]  ;
        Kpos++ ;
    }
}
   // trie positive
 printf("tableaux positive TPOS \n");
   
   for(int j =0 ;j<Kpos ;j++){
    printf(" %d\t",TPOS[j]);
 } 
         printf("\n") ;
  // trie negative
   printf("tableaux negative TNEG\n");
   
   for(int j =0 ;j<Kneg ;j++){
    printf("%d\t",TNEG[j]);
 } 
         printf("\n") ;

    return 0 ;
}