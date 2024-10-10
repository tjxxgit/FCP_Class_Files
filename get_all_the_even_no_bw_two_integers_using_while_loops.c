// Program to write Even numbers between two integers

#include <stdio.h>
int main (){

int i;
int n;
printf ("Enter the numbers between which you want to write Even numbers ");
scanf ("%d %d", &i, &n);

while (i<=n)
{

if (i%2==0)
    {
        printf ("%d ", i);
    }
     
    i=i+1;

}

return 0;

}