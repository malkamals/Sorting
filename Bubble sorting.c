#include<stdio.h>
void tukar(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}
void bubble(int array[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)
       for (j = 0; j < n-i-1; j++)
           if (array[j] > array[j+1])
              tukar(&array[j], &array[j+1]);
}
void cetak(int array[], int besar)
{
    int i,j;
    for (i=0; i < besar; i++){
    for(j=1;j<=i;j++);{
        printf("DATA %d: %d \n", j,array[i]);
        }}
    printf("\n");
}
int main()
{
int b,array[] = {64, 34, 25, 12, 22, 11, 90,1,128,222};

    int a = sizeof(array)/sizeof(array[0]);
    bubble(array, a);
    printf("Hasil: \n");
    cetak(array, a);
    return 0;
}

