#include <stdio.h>
#include <string.h>

/*int countelements(int array[]){
    printf("%d", sizeof(int));
    printf("lengte array: %d\n", sizeof(array)/sizeof(int));
    int counter = 0;
    for(int i=0; array[i] != '\0'; i++){
        counter++;
    };
    return counter;
    return 0;
}*/

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min])
                min = j;
        }
       if (min != i) {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);}
}
//https://www.geeksforgeeks.org/c-program-to-sort-an-array-in-ascending-order/

void minimumarray(int array[], int lengte){

    int resul = array[0];

    for(int i=0; i < lengte; i++){
        if(resul > array[i]){
            resul = array[i];
        };
    }
    printf("Het kleinste getal uit de array is: %d\n", resul);
}

int main(){

    int array1[10] = {1,2,3,4,5,6,7,8,9,10};
    int array2[5] = {4,8,2,6,5};

    int len1 = sizeof(array1) / sizeof(array1[0]);
    int len2 = sizeof(array2) / sizeof(array2[0]);

    minimumarray(array1, len1);
    minimumarray(array2, len2);

    selectionSort(array1, len1);
    selectionSort(array2, len2);

    return 0;

}