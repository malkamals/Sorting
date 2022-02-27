#include<stdio.h>
void swap(int *a, int *b){
int temp = *a;
*a = *b;
*b = temp;
}
void selectionsort(int array[],int size){
for (int step=0; step<size-1;step++){
    int min_idx=step;

    for(int i= step+1;i< size;i++)
        //descending bisa dilakukan dengan menukar > menjadi <
        if(array[i]<array[min_idx])
            min_idx=i;
    //menaruh nilai min ke posisi
    swap(&array[min_idx],&array[step]);
}
}
//fungsi cetak array
void printarray(int array[],int size){
for(int i=0;i<size;i++){
    printf("%d ",array[i]);
}
printf("\n");
}
int main(){
int data[]={5,3,6,7,1,10,9};
int size=sizeof(data)/sizeof(data[0]);
selectionsort(data,size);
printf("array setelah disusun dari kecil ke besar(ascending):\n");
printarray(data,size);
}
