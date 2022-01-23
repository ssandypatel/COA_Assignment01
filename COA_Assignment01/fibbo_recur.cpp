#include <iostream>
#include <time.h>

using namespace std;

unsigned long long int fibo ( int i) {
    if (i<2){
        return i;
    } 
return (fibo(i-1)+fibo(i-2));
}

int main(){
    double time = clock();
    int n = 40;
    cout<<"Starting......  \n";
    for (int i=0; i<n;i++){
    cout<<fibo(i);
    cout <<", ";
    }
    time = clock() - time;
    time = time / CLOCKS_PER_SEC;
    cout<<"\n  total time for finding 50 numbers in seconds is ";
    cout<<time;
    return 0;
}
