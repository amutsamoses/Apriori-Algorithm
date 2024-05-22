#include<iostream>
#include<conio.h>

using namespace std;
 
int main() {
  int i, j, k;
  char v[5] = {
    'A',
    'B',
    'C',
    'D',
    'E'
  };
  int m[5][5];
  cout << "\n Enter Adjacency matrix";
  for (i = 0; i < 5; i++) {
    cout << "\nDistances for vertex " << i + 1 << ":";
    for (j = 0; j < 5; j++) {
      cin >> m[i][j];
    }
  }
 
  int min;
  cout << "\n Enter threshold:";
  cin >> min;
 
  char sv;
  cout << "Enter vertex:";
  cin >> sv;
 
  if (sv == 'a' || sv == 'A') {
    k = 0;
  }
  if (sv == 'b' || sv == 'B') {
    k = 1;
  }
  if (sv == 'c' || sv == 'C') {
    k = 2;
  }
  if (sv == 'd' || sv == 'D') {
    k = 3;
  }
  if (sv == 'e' || sv == 'E') {
    k = 4;
  }
 
  for (i = 0; i < 5; i++) {
    if (m[k][i] <= min && m[k][i] != 0) {
      cout << "\n" << sv << " is connected to " << v[i] << " and distance is " << m[k][i];
    }
  }
 
  cout << "\nK1={";
 
  for (i = 0; i < 5; i++) {
    if (m[k][i] <= min) {
      cout << v[i] << ",";
    }
  }
  cout << "}";
 
  cout << "\nK2={";
  for (i = 0; i < 5; i++) {
    if (m[k][i] > min) {
      cout << v[i] << ",";
    }
  }
  cout << "}";
 
  getch();
}
 
/* OUTPUT 1
 
 
 Enter Adjacency matrix
Distances for vertex 1:0
1
2
99
99
 
Distances for vertex 2:1
0
99
3
2
 
Distances for vertex 3:2
99
0
1
99
 
Distances for vertex 4:99
3
1
0
4
 
Distances for vertex 5:99
2
99
4
0
 
 Enter threshold:3
Enter vertex:A
 
A is connected to B and distance is 1
A is connected to C and distance is 2
K1={A,B,C,}
K2={D,E,}
 
*/