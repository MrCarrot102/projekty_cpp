#include <iostream>

int main()
{
    // lokalna deklaracja
    int num = 10;

    // do loop
    do
    {
        std :: cout << "wartosc liczby: " << num << "\n";
        num += 1;

        if ( num > 15 )
            break;
    }while ( num < 20 );

    return 0;
}
