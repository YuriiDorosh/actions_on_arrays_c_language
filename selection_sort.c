#include <stdio.h>


void selection_sort(int a[], int length);
void print_array(int a[], int length);


int main(void)
{
    int array[] = {7, 1, 3, 9, 0, 2, 4, 5, 8, 6};

    int length = sizeof(array) / sizeof(array[0]);


    selection_sort(array, length);
    print_array(array, length);

    return 0;
}


void selection_sort(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int min_pos = i;
        for ( int j = i + 1; j < length; j++)
            if (a[j] < a[min_pos])
                min_pos = j;
        if (min_pos != i)
        {
            int temp = a[i];
            a[i] = a[min_pos];
            a[min_pos] = temp;
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
