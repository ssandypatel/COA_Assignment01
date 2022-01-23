#include <iostream>
#include <time.h>
#include<stdlib.h>
using namespace std;

int main()
{   double extime = clock();
    int N = 256, i, j, k;
    int a[N][N], b[N][N], mult[N][N];
    


    
   
    srand(time(0));
    // Storing elements of first matrix.
   
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++)
        {
            
            a[i][j] = rand();
            
        }
    }
    
    // for( i = 0; i < N; i++)
    //     for( j = 0; j < N; j++)
    //     {
    //         std::cout<<a[i][j]<<'\t';
    //         std::cout<<'\n';
    //     }
    
  
    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++)
        {
            
            b[i][j] = rand();
            
        }
    // for( i = 0; i < N; i++)
    //     for( j = 0; j < N; j++)
    //     {
    //         std::cout<<b[i][j]<<'\t';
    //         std::cout<<'\n';
            
    //     }

    

    // Initializing elements of matrix mult to 0.
    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++)
        {
            mult[i][j]=0;
        }
    double meat_time = clock();
    // Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < N; ++i)
        for(j = 0; j < N; ++j)
            for(k = 0; k < N; ++k)
            {
                mult[i][j] += a[i][k] * b[k][j];
            }

    // Displaying the multiplication of two matrix.
    // cout << endl << "Output Matrix: " << endl;
    // for(i = 0; i < N; ++i){
    //     for(j = 0; j < N; ++j){
        
    //         cout << " " << mult[i][j];
    //         if(j == N-1)
    //             cout << endl;
    //     }
    // }
    meat_time = clock() - meat_time;
    extime = clock() - extime;
    meat_time = meat_time/CLOCKS_PER_SEC;
    extime = extime/CLOCKS_PER_SEC;
    cout<<"\nTime taken is:\n";
    cout<<"Meat time "<<meat_time<<"seconds\n";
    cout<<"Total time "<<extime<<"seconds";

    return 0;
}