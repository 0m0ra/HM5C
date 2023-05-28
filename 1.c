#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int N;
    printf("Введите длину массива: ");
    scanf("%d", &N);
    
    int arr[N];
    printf("Введите элементы массива через пробел: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    
    int k = N / 2; // Номер середины массива
    
    // Меняем местами первую и вторую половины массива
    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, N - 1);
    reverseArray(arr, 0, N - 1);
    
    printf("Новый массив: ");
    printArray(arr, N);
    
    return 0;
}