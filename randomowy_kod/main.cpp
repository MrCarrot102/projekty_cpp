// program do sortowania tablicy
# include <iostream>
# include <algorithm>

# define SIZE 10

int main()
{
    std :: cout << "wartosci tablicy: " << "132, 520, 210, 510, 140, 125, 52, 96, 55, 86" << "\n";

    int array[SIZE] = {132, 520, 210, 510, 140, 125, 52, 96, 55, 86};

    std :: cout << "wartosci tablicy posortowane: ";

    for ( int i = 0 ; i < SIZE ; ++i )
    {
        int malawartosc = i;
        for ( int j = i + 1; j < SIZE ; ++j )
        {
            if ( array[j] < array[malawartosc] )
            {
                malawartosc = j;
            }
        }
        std :: swap(array[i], array[malawartosc]);
    }

    for ( int index = 0 ; index < SIZE ; ++index )
    {
        std :: cout << array[index] <<", ";
    }

    std :: cout << "\n";
    return 0;

}
