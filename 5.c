#include <stdio.h>

void swapColumns(int matrix[][10], int rows, int cols, int col1, int col2) {
    for (int i = 0; i < rows; i++) {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}

void printMatrix(int matrix[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N, M;
    printf("Введите размеры матрицы (N и M): ");
    scanf("%d %d", &N, &M);
    
    int matrix[10][10];
    printf("Введите элементы матрицы:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Вычисление сумм столбцов
    int columnSums[10] = {0};
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            columnSums[j] += matrix[i][j];
        }
    }
    
    // Поиск индекса столбца с минимальной суммой
    int minSumIndex = 0;
    for (int j = 1; j < M; j++) {
        if (columnSums[j] < columnSums[minSumIndex]) {
            minSumIndex = j;
        }
    }
    
    // Поиск индекса столбца с максимальной суммой
    int maxSumIndex = 0;
    for (int j = 1; j < M; j++) {
        if (columnSums[j] > columnSums[maxSumIndex]) {
            maxSumIndex = j;
        }
    }
    
    // Меняем местами столбцы с минимальной и максимальной суммой
    swapColumns(matrix, N, M, minSumIndex, maxSumIndex);
    
    // Вывод исходной матрицы с поменянными столбцами
    printf("Исходная матрица с поменянными столбцами:\n");
    printMatrix(matrix, N, M);
    
    return 0;
}