#include <iostream>

double dzielenie(double liczba1, double liczba2) {

  if (liczba2 == 0) {
    std ::cout << "nie mozna dzielic przez 0\n";
  }
  std ::cout << "wynik dzielenia: \n";
  return (liczba1 / liczba2);
}

int main() {
  int n1 = 2, n2 = 0;

  //std ::cout << "wprowadz dwie liczby do wykonania dzielenia: \n";
  //std ::cin >> n1 >> n2;

  double n3 = 0;

  try {
    n3 = dzielenie(n1, n2);
    std ::cout << n3;
  }

  catch (const char *msg ) {
    std ::cout << msg << "\n";
  }

  return 0;
}
