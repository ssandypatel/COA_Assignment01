#include <stdio.h>
#include <time.h>
#include <stdint.h>
unsigned long long int X[100];

void memorisation(int n) {
  int i;
  X[0] = 0;
  X[1] = 1;
  for (i = 2; i < 93; i++) {
    X[i] = X[i-1]+ X[i-2];
  }
}

int main(){
    double time;
    time = clock();

    memorisation(100);
    for(int i = 0; i<93; i++){
        printf("%llu, ", X[i]);
    }

    time = clock() - time;
    time = time/CLOCKS_PER_SEC;
    printf("\n");
    printf("   Total CPU time is %f seconds.", time);
    return 0;
}