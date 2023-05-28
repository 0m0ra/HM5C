#include <stdio.h>

struct Move {
    int a;
    int b;
};

struct Move getFinishPoint(struct Move arr[], int n) {
    struct Move result = {0, 0}; // Начальные координаты
    
    for (int i = 0; i < n; i++) {
        result.a += arr[i].a;
        result.b += arr[i].b;
    }
    
    return result;
}

int main() {
    struct Move moves[] = {{2, -3}, {1, 5}, {-4, 2}}; // Пример массива перемещений
    
    int n = sizeof(moves) / sizeof(moves[0]); // Вычисление количества элементов в массиве
    
    struct Move finalPoint = getFinishPoint(moves, n);
    
    printf("Конечная точка: (%d, %d)\n", finalPoint.a, finalPoint.b);
    
    return 0;
}