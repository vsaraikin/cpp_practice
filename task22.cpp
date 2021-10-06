// По данной строке определите, является ли она палиндромом (то есть, читается одинаково как слева-направо, так и справа-налево).

// Входные данные

// На вход подается 1 строка без пробелов.

// Выходные данные

// Необходимо вывести yes, если строка является палиндромом, и no в противном случае.

// Sample Input:

// kayak
// Sample Output:

// yes

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  
  string greeting;
  cin >> greeting;
  string copy(greeting);
  reverse(greeting.begin(),greeting.end());
  if (greeting == copy) {
      cout << "yes";
  }
  else {cout << "no";}
}