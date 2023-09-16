#include <iostream>

void trojkat_pascala(int);

int main() {

  trojkat_pascala(5);
  return 0;
}

int ilosc_liczb(int x) {
  int licznik = 0;
  while (x != 0) {
    x = x / 10;
    ++licznik;
  }
  return licznik;
}

void trojkat_pascala(int n) {
  int i, j, x, y, maxdlugosc;
  std ::string len;

  for (i = 0; i < n; i++) {
    x = 1;
    len = std ::string((n - i - 1) * (n / 2), ' ');
    std ::cout << len;
    for (j = 0; j <= i; j++) {
      y = x;
      x = x * (i - j) / (j + 1);
      maxdlugosc = ilosc_liczb(x) - 1;

      if (n % 2 == 0) {
        std ::cout << y << std ::string(n - 1 - maxdlugosc, ' ');
      } else {
        std ::cout << y << std ::string(n - 2 - maxdlugosc, ' ');
      }
    }
    std ::cout << "\n";
  }
}
