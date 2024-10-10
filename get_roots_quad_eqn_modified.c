#include <stdio.h>    //Code to get square roots of a Quadratic Equation using if Else Statements
#include <math.h>
int main()
{
    int a, b, c;
    int d;

    printf("Input coefficients (a,b,c) of the Quad Eqn of the form ax^2+bx+c\n");
    scanf("%d %d %d", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if (d > 0)
    {
        float ans1 = ((-b) + sqrt(d)) / (2 * a);
        float ans2 = ((-b) - sqrt(d)) / (2 * a);
        printf("The Solution to the above quadaratic eqaution is %f & %f", ans1, ans2);
    }
    else if (d == 0)
    {
        float ans = ((-b) + sqrt(d)) / (2 * a);
        printf("The Solution to the above quadaratic eqaution is %f & %f", ans, ans);
    }
    else
        printf("The solution to the above quadratic equation is imaginary");

    return 0;
}
