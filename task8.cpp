// Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.

// Формат входных данных

// В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
// Формат выходных данных
// Выведите ответ на задачу.
// Sample Input 1:

// 5
// 0 1 2 3 4
// Sample Output 1:

// 1
// Sample Input 2:

// 5
// 2 4 6 8 10

// Sample Output 2:
// 0

#include <iostream>
using namespace std;
 
int main()
{
    int n, iodd=-1, min=0;
    cin >> n;
 
    int*a = new int[n];
    
    for (int i = 0; i < n; i++)
      cin >>a[i];
 
    for (int i = 0; i < n; i++)      
      if (a[i]%2!= 0) {
          iodd=i; 
          break;
          }
      
    for (int i = iodd; i < n; i++)  
      if (a[i]%2!=0 && (i==iodd || a[i] < min)) min = a[i];
      
    if (iodd!=-1) cout << min <<endl;  
    else cout <<0<<endl;
    delete[]a;

system("pause");
return 0;
}

