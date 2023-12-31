﻿/*
    Дан целочисленный массив размера N. Вывести все содержащиеся в
    данном массиве нечетные числа в порядке возрастания их индексов, а
    также их количество K.
*/
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // Объявление пременных n и k, присвоение k = 0
    int n, k = 0;
    // Ввод значения переменной n
    cout << "Введите размер массива: ";
    cin >> n;
    // Проверка на неправильный ввод размера массива array 
    if (n <= 0) {
        cerr << "Неправильный ввод размера массива";
        // Завершение программы
        return 0;
    }
    // Объявление указателя array
    int* array;
    // Выделение памяти под массив размером n
    array = new int[n];
    // Ввод значений элементов массива array
    for (int i = 0; i < n; i++) {
        cout << "Введите " << i + 1 << "-й элемент массива: ";
        cin >> *(array + i);
    }
    
    cout << "\nНечетные элементы массива: ";
    // Перебор массива array
    for (int i = 0; i < n; i++) {
        // Проверка элемента массива на нечетность
        if (*(array + i) % 2 != 0) {
            // Ввывод нечетного элемента
            cout << *(array + i) << " ";
            // Подсчет количества нечетных элементов
            k++;
        }
    }
    // Ввывод количества нечетных элементов
    cout << "\nКоличество нечетных элементов: " << k;
    // Освобождение выделенной памяти массива
    delete[] array;

    return 1;
}
