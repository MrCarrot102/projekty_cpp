#include <iostream>

class programming
{
private:
    int variable = 5 ;
public:
    void input_value()
    {
      std ::cout << "podaj wartosc ktora ma byc w funckji " << variable << "\n";
      std ::cin >> variable;
    }

    void output_value()
    {
      std ::cout << "wartosc funkcji: " << variable << "\n";
    }
};

int main()
{
    programming object;

    object.input_value();
    object.output_value();

    return 0;

}
