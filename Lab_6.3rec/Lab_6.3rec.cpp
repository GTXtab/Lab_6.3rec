#include <iostream>
#include <iomanip>

using namespace std;

void genArray(int arr[], const int size, int i = 0)
{
    if (size <= i) {
        return;
    }

    cout << "Element " << i + 1 << ": ";
    cin >> arr[i];
    genArray(arr, size, i + 1);
}

void Print(const int arr[], const int size, int i = 0)
{
    if (i >= size) {
        return;
    }

    if (i > 0) {
        cout << " "; // Додаємо пробіл перед усіма елементами, крім першого
    }

    cout << arr[i];
    Print(arr, size, i + 1);
}

int findMax(const int arr[], int size, int i = 0, int max = INT_MIN) {
    if (i >= size) {
        return max;
    }

    if (arr[i] > max) {
        max = arr[i];
    }
    
    return findMax(arr, size, i + 1, max);
}

int main() {
    int size;

    cout << "Size of Array: ";
    cin >> size;

    int* arr = new int[size];

    genArray(arr, size);

    cout << "\nMainArray: ";
    Print(arr, size);
    cout << endl;

    int max = findMax(arr, size);
    cout << "MAX: " << max << endl;

    delete[] arr;

    return 0;
}
