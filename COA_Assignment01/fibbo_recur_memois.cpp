#include<stdio.h>
#include <time.h>
#include <stdint.h>
unsigned long long int X[100];

unsigned long long int fib(int n){
   if (n <= 1 )
      return X[n];
    else if (X[n] > 1 ){
        return X[n];
    }
   X[n] = fib(n-1) + fib(n-2);
   return X[n];
}

int main (){
    double time;
    time = clock();
    X[0] = 0;
    X[1] = 1;
  for (int i=0; i < 100 ; i++){
        X[i+2] = 0;
        printf("%llu, ", fib(i));
    }
  time = clock() - time;
  time = time/CLOCKS_PER_SEC;
  printf("\n");
  printf("   Total CPU time for calculating first 100 Fibonacci numbers is %f seconds.", time);
  return 0;
}