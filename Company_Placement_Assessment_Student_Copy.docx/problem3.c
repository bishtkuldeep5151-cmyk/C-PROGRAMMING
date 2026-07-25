#include <stdio.h>

void combine(int n, int k){
    
  // First Value
   for(int i = 1; i <= k; i++){
   //Second Value
      for(int j = i+1; j <= n; j++ ){
       printf("[%d, %d]\n", i, j);  
      }
   }
   
}

int main(){
    int n = 4;
    int k= 2;
     
    printf("All Possible Combination are :\n");
    combine(n , k);
  
    return 0;
}