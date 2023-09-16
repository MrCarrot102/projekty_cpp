#include <iomanip>
#include <iostream>
#include <math.h>

int main() {
  float waga;
  float wzrost;
  float bmi;
  char odpowiedz;

  do {
    std ::cout << "podaj swoja wage: \n";
    std ::cin >> waga;

    std ::cout << "podaj swoj wzrost: \n";
    std ::cin >> wzrost;

    bmi = (waga / std ::pow(wzrost, 2)) * 703;
    std ::cout << "\n";

    std ::cout << std::fixed << std::showpoint << std ::setprecision(2);
    std ::cout << " twoje bmi: " << bmi << "\n";

    if (bmi < 18.5) {
      std ::cout << "masz niedowage!\n";
    }

    else if (bmi >= 18.5 && bmi < 25) {
      std ::cout << "twoje bmi jest w normie\n";
    }

    else if (bmi > 25) {
      std ::cout << "masz nadwage!\n";
    }

    else {
      std ::cin.get();
    }

    std ::cin.get();
    std ::cout << "\n";

    std ::cout << "chcesz ponowic sprawdzanie bmi?\n";
    std ::cin >> odpowiedz;

  } while (std ::toupper(odpowiedz) == 'T');

  std ::cout << "dziekuje za skorzystanie z kalkulatora bmi <3";

  return 0;
}
