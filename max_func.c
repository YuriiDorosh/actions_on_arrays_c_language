#include <stdio.h>


int max_of_array(int a[], int length);
void print_max(int max);


int main(void)
{
    int array[] = {7, 1, 3, 9, 0, 2, 4, 5, 8, 6};

    int length = sizeof(array) / sizeof(array[0]);


    int max_value = max_of_array(array, length);
    print_max(max_value);

    return 0;
}

int max_of_array(int a[], int length)
{
    int max = a[0];

    for (int i = 0; i < length; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
     return max;
}

void print_max(int max)
{
    printf("The biggest element of the array - %d", max);
}