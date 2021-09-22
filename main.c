#include "header.h"
#include <assert.h>
#include <stdio.h>

int average(int a,int b) {
    int p;
    int j=0;
    return (a+b)/2;
}
void main()
{
   int i = 0;

   for (; i<10 ; i++) {
       int j=0;
     for ( j = 0; j < 10 ; j++) ;
        int k=add(i,j);
        printf("%d\n", k);
   }
   printf("%d\n",average(4,3));

   assert(i == 10);
}
