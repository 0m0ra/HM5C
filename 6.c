#include <stdio.h>
#include <stdlib.h>

int abs_arr(int arr[], int n) {
    int count = 0; // Счетчик замен
    
    for (int i = 0; i < n; i++) {
        if (*(arr + i) < 0) {
            *(arr + i) = abs(*(arr + i)); // Замена отрицательного элемента его модулем
            count++;
        }
    }
    
    return count;
}

int main() {
    int arr[] = {-1, 2, -3, 4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Исходный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    
    int replacements = abs_arr(arr, n);
    
    printf("Массив после замен: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    
    printf("Количество замен: %d\n", replacements);
    
    return 0;
}