// Program to shift the elements of array by k index. Like if the array is 1234 and we need to 
//shift the array by k=2 then the new array will be 3412

#include <stdio.h>
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int k;
    int i = 0;
    scanf("%d", &k);
    int arr1[6];
    while (i < 6)
    {
        arr1[(i+k)%6] = arr[i];
        i++;
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d ",arr1[i]);
    }

    
    

    return 0;
}