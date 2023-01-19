#include <stdio.h>


void bubble_sort(int a[], int length);
void print_array(int a[], int length);


int main(void)
{
    int array[] = {7, 1, 3, 9, 0, 2, 4, 5, 8, 6};

    int length = sizeof(array) / sizeof(array[0]);
    

    bubble_sort(array, length);
    print_array(array, length);

    return 0;
}


void bubble_sort(int a[], int length)
{
     for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < (length - 1); j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void print_array(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("array[%d] = %d\n", i, a[i]);
    }
}