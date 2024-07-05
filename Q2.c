#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int randomNumber(int min, int max);
void setupArr1(int *arr, int N);
void setupArr2(int *arr, int maxV, int N);
void setupArr3(int *arr3, int *arr1, int *arr2, int N);
void printArray(int *arr, int N);

int main() {
    int N = 7;
    printf("Enter max value: \n");
    int maxValue;
    scanf("%d", &maxValue);

    int arr1[N];
    int arr2[N];
    int arr3[N];

    setupArr1(arr1, N);
    setupArr2(arr2, maxValue, N);
    setupArr3(arr3, arr1, arr2, N);

    printf("Array 1: ");
    printArray(arr1, N);
    printf("Array 2: ");
    printArray(arr2, N);
    printf("Array 3: ");
    printArray(arr3, N);

    return 0;
}


int randomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}


void setupArr1(int *arr, int N) {
    for (int i = 0; i < N; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        while (arr[i] < 0) {
            printf("Number too low, try again: ");
            scanf("%d", &arr[i]);
        }
    }
}


void setupArr2(int *arr, int maxV, int N) {
    for (int i = 0; i < N; i++) {
        arr[i] = randomNumber(0, maxV);
    }
}

void setupArr3(int *arr3, int *arr1, int *arr2, int N) {
    int k = 0;
    int found;
    for (int i = 0; i < N; i++) {
        found = 0; 
        for (int j = 0; j < N; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1; 
                break;
            }
        }
        if (!found) {
            arr3[k++] = arr1[i];
        }
    }
    
    for (int i = k; i < N; i++) {
        arr3[i] = -1; 
    }
}


void printArray(int *arr, int N) {
    for (int i = 0; i < N; i++) {
        if (arr[i] != -1) { 
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
