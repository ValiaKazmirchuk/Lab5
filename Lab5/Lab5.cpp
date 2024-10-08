// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int size; 

    cout << "Введіть розмір масиву: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Введіть " << size << " елементів масиву:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Елемент " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "\nПочатковий масив:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * arr[i];
    }

    cout << "\n\nМасив після піднесення до квадрату:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}