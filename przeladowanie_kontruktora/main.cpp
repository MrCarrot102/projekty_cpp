#include <iostream>

class pole {
  // sekcja prywatna
private:
  int dlugosc;
  int wysokosc;

  // sekcja publiczna
public:
  pole() : dlugosc(5), wysokosc(2) {} // nadanie wartosci domyslnych jesli uzytkownik nie poda swoich

  pole(int I, int b) : dlugosc(I), wysokosc(b) {}

  void getlength() {
      std ::cout << "wejsciowe wartosci dlugosci i wysokosci: " << dlugosc << "\n" << wysokosc << "\n";
  }

  int areacalculation() { return (dlugosc * wysokosc); } // funkcja zwaracjaca obliczone pole

  void displayarea(int temp) {
    std ::cout << "pole wynosi: " << temp << std::endl; // funkcja wyswietlajaca wartosc obliczonego pola
  }
};

int main() {
  pole objarea1, objarea2(24, 2);

  int temp;

  // liczenie wartosci dla pierwszego obiektu ktory ma domyslne wartosci
  objarea1.getlength(); // wywolanie funkcji ktora wyswietla jakie sa dlugosci
  std ::cout << "pole kiedy korzystamy z domyslnych wartosci:" << std ::endl;
  temp = objarea1.areacalculation(); // obliczamy pole korzystajac z danej funkcji
  objarea1.displayarea(temp); // wyswietlanie pola

  std ::cout << "\n";

  // liczenie wartosci dla drugiego obiektu ktory ma zadane wartosci
  objarea2.getlength(); // wywoalnie funkcji wyswietlajacej dlugosc i wysokosc
  std::cout << "pole kiedy korzystamy z zadanych wartosci: " << std::endl;
  temp = objarea2.areacalculation(); // obliczanie pola
  objarea2.displayarea(temp); // wyswietlanie pola za pomoca funkcji

  return 0;
}
