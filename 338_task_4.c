/*
*Shaon Paul Shanto
*purpose of code: Increment/Decrement Operator Analysis
*14 november, 2025
*/

#include <stdio.h>
int main()
{
    int i = 5, j, k;
    int arr[10];
    int value = 100;

    printf("Initial : i = %d\n", i);
    j = i++;
    printf("j = i++: j = %d , i = %d\n", j, i);

    j = ++i;
    printf("j = ++i : j = %d , i = %d\n", j, i);

    printf("\nMultiple operations :\n");

    k = i++ + ++i;  // Undefined behavior
    printf("k = i++ + ++i ; // UNDEFINED BEHAVIOR\n");

    k = (i++) + (++i);  // Still undefined
    printf("k = (i++) + (++i) ; // STILL UNDEFINED\n");

    printf("\nSafe usage :\n");

    arr[i++] =value;   // Valid: assign then increment
    printf("arr[i++] = value ; // Valid : assign then increment\n");

    arr[++i] = value;   // Valid: increment then assign
    printf("arr[++i] = value ; // Valid : increment then assign\n");

    printf("\nFunction arguments :\n");

    printf("printf(\"%%d %%d\", i, i++); // UNDEFINED\n");

    return 0;
}
