#include <stdio.h>


int min_of_array(int a[], int length);
void print_min(int min);


int main(void)
{
    int array[] = {7, 1, 3, 9, 0, 2, 4, 5, 8, 6};

    int length = sizeof(array) / sizeof(array[0]);


    int min_value = min_of_array(array, length);
    print_min(min_value);

    return 0;
}

int min_of_array(int a[], int length)
{
    int min = a[0];

    for (int i = 0; i < length; i++)
    {
        if (a[i] < min)
            min = a[i];
    }
     return min;
}

void print_min(int min)
{
    printf("The smallest element of the array - %d", min);
}