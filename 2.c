#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

float averageAge(struct Person arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i].age;
    }
    float average = (float)sum / n;
    return average;
}

int main() {
    struct Person people[3]; // Пример массива структур
    
    // Заполнение массива структур
    strcpy(people[0].name, "John");
    people[0].age = 25;
    
    strcpy(people[1].name, "Emily");
    people[1].age = 30;
    
    strcpy(people[2].name, "Michael");
    people[2].age = 35;
    
    int n = sizeof(people) / sizeof(people[0]); // Вычисление количества элементов в массиве
    
    // Вызов функции и вывод результата
    float average = averageAge(people, n);
    printf("Средний возраст: %.2f\n", average);
    
    return 0;
}