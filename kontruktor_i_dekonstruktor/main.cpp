#include <iostream>

class cubedemo
{
public:
    int side;

    cubedemo() { side = 8; } // konstruktor klasy ustawiajacy dlugosc boku na 8

    ~cubedemo() { std::cout << "\ndekonstruktor... "; } // dekonstruktor klasy wypisujacy dekonstruktor po wykonaniu
};

int main()
{
    cubedemo cdemoobj; // tworzenie obiektu cdemoobj klasy
    std::cout << "";
    std::cout << cdemoobj.side;
    return 0;
}
