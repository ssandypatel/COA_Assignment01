#include <iostream>
#include <time.h>

using namespace std;


int main(){
    double time = clock();
    // int a = 0; 
    // int b = 1;
    unsigned long long a = 0,b = 1,c;
    
    int n = 10;
    // cin>>n;
    cout<<"Fabonacci series is: ";
    for (int i = 0; i < n; i++)
    {
        cout<<a<<" ";
        c = a+b;
        a = b;
        b = c;
    }
    time = clock() - time;
    time = time/CLOCKS_PER_SEC;
    cout<<"\nTotal time taken to execute the program is:";
    cout<<time;
    
    return 0;
}