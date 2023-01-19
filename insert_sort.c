#include <stdio.h>


void insertion_sort(int a[], int length);
void print_array(int a[], int length);


int main(void)
{
    int array[] = {7, 1, 3, 9, 0, 2, 4, 5, 8, 6};

    int length = sizeof(array) / sizeof(array[0]);


    insertion_sort(array, length);
    print_array(array, length);

    return 0;
}


void insertion_sort(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int key = a[i];
        int j = i - 1;

        while ( j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}

void print_array(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("array[%d] = %d\n", i, a[i]);
    }
}