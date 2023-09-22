#include <stdio.h>
int main()
{
    int kumar[50];
    int found, n, key;
    printf("enter the size of array\n");
    scanf("%d", &n);
    if (n > 50)
    {
       printf("OVERFLOW");
    }
    else{
    printf("enter the elements of array \n");
    for (int v = 0; v < n; v++)
    {
        scanf("%d", &kumar[v]);
    }
    printf("entered elements are:\n");
    for (int k = 0; k < n; k++)

    {
        printf("%d\n", kumar[k]);
    }
    printf("enter the item to be found:\n");
    scanf("%d", &key);
    for (int z = 0; z < n; z++)
    {
        if (kumar[z] == key)
        {
            printf("%d is found at index %d\n", key, z);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("required element %d is not found in the array ", key);
    }
    }
}