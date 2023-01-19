#include <stdio.h>


void reverse_array(int a[], int length);
void print_array(int a[], int length);


int main(void)
{
    int array[] = {7, 1, 3, 9, 0, 2, 4, 5, 8, 6};

    int length = sizeof(array) / sizeof(array[0]);


    reverse_array(array, length);
    print_array(array, length);

    return 0;
}


void reverse_array(int a[], int length)
{
    int temp = 0;

    for (int i = 0; i < (length / 2); i++)
    {
        temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }
}

void print_array(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("array[%d] = %d\n", i, a[i]);
    }
}