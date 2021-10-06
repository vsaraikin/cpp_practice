// Найдите количество положительных элементов в данном массиве.
// Формат входных данных

// В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
// Формат выходных данных
// Выведите ответ на задачу.
// Sample Input:

// 5
// 1 -2 3 -4 5

// Sample Output:

// 3

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    int counter = 0;

    for (int i=0; i<n; i++) {
        cin >> a[i];
    }

    for (int x=0; x<n; x++) {
        if (a[x]>0)
            counter += 1;
    }
    cout << counter;

    return 0;
}
