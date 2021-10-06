// Дано нечетное число n, не превосходящее 15. Создайте двумерный массив из n×n элементов, заполнив его символами "." 
// (каждый элемент массива является строкой из одного символа). Затем заполните символами "*" среднюю строку массива, средний столбец массива, 
// главную диагональ и побочную диагональ. В результате "*" в массиве должны образовывать изображение звездочки. Выведите полученный массив на экран, 
// разделяя элементы массива пробелами.

// Sample Input:

// 5
// Sample Output:

// * . * . *
// . * * * .
// * * * * *
// . * * * .
// * . * . *


#include <iostream>

using namespace std;
int main () {
    const int size = 15;
    char a[size][size];
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = '.';
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((n/2==i || n/2==j)){
                a[i][j] = '*';
            }
            else if (i==j)
            {
                a[i][j] = '*';
            }
            else if (i == n - j - 1)
            {
                a[i][j] = '*';
            }
            
            
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0; 
}