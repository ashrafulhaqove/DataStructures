#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double timeUsed ;
int comparison = 0, dataMove = 0 ;

int bubble(int k, int a[])   // *a
{
    int i, temp, t ;


    clock_t start, finish  ;
    start = clock();

    while(k!= 0)
    {
        t = 0 ;

        for (i = 0 ; i < k  ; i++)
        {
            comparison++ ;
            if( a[i] > a[i +1])
            {
                temp = a[i] ;
                a[i] = a[i + 1];
                a[i + 1] = temp ;
                dataMove ++ ;
                t = i ;
            }

        }
        k = t;


    }
    finish = clock();

    timeUsed = (double)(finish - start)/CLOCKS_PER_SEC ;

}
int main ()
{
    int  n, k, t, i, temp ;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    k = n ;
    for(i = 0 ; i < n ; i++)
    {
        a[i] = rand();
    }

 for(i = 0 ; i < n ; i ++)
    {

        printf("%d \n", a[i]);
    }

    bubble(k, a);

    for(i = 0 ; i < n ; i ++)
    {

        printf("%d    ", a[i]);
    }
    printf( " time elapsed %f\n", timeUsed );
    printf(" number of comparison %d\n", comparison);
    printf(" number of data movement %d\n", dataMove);

    return 0;
}
