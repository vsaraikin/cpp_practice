// Дано положительное действительное число X. Выведите его первую цифру после десятичной точки.
// Формат входных данных
// Вводится положительное действительное число.
// Формат выходных данных
// Выведите ответ на задачу.
// Sample Input:

// 1.79

// Sample Output:

// 7

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double n;
    int a;
    cin >> n;
    cout << setprecision(1) << fixed;
    a = (n-trunc(n))*10;
    cout << a << endl;


    return 0;
}