// GET GCD OF TWO NUMBERS

#include <stdio.h>
int main () {
    int i1;
    int i2;
    printf ("Enter two integers whose GCD needs to be found");
    scanf("%d",&i1);
    scanf("%d",&i2);
    while (i1 !=0)
    {
        int temp = i2;
        i2 = i1;
        i1 = temp%i1;
    }
    printf("%d",i2);
    return 0;
}