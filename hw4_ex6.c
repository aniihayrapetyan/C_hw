#include <stdio.h>

void copy_arr(int* array1, int* array2, int size1, int* size2){
    *size2 = size1;
    for (int i=0; i<size1; i++){
        *(array2+i) = *(array1+i);
    }

}

int main(){
    int n, size2, j; 

    printf("Input the number of elements in the array\n");
    scanf("%d", &n);

    int array[n];

    for (int i=0; i<n; i++){
        printf("Enter the element number N%d:", i+1);
        scanf("%d", &j);
        array[i] = j;

    }


    int copied_array[n];

    copy_arr(&array, &copied_array, n, &size2);


    printf("your copied array is [");
    for (int i = 0; i<size2; i++){
        printf ("%d ", copied_array[i]);
    }
    printf("]");

return 0;
}
