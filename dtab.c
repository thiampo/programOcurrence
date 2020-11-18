#include<stdio.h>
int tab1(int T[],int A){
    int i ,j ,m;
    
 
     for(i = 0; i<A; i++){
    printf("veuillez entre une valeur tab[%d]\n ",i);
       scanf("%d",&T[i]);  }
       for(i=0;i<A;i++){
           for(j=i+1;j<A;){

               if(T[i]==T[j] && T[i]==0){
                   for(m=j;m<A;m++){
                       T[m]=T[m+1];
                   }A--;
               }j++;
           }
       }
  
  
  
  for(int i=0 ;i<A ;i++){
          
           printf("%d\t",T[i]) ;
       } 
    
     printf("\n");

  
      
return 0 ;
}