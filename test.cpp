#include <iostream>
using namespace std;


void resize(int*& A, int size) {
  int *tmp = new int[size * 2];
  for (int i = 0; i < size; i++) tmp[i] = A[i];
  delete [] A;
  A = tmp;
}

int main() {
  int *A = new int[4];
  for (int i = 0; i < 4; i++) A[i] = i * 10;
  for (int i = 0; i < 4; i++) cout << A[i] << " ";
  cout << endl;
  resize(A,4);
  for (int i = 0; i < 8; i++) cout << A[i] << " ";
  cout << "\nfinito\n";
}
