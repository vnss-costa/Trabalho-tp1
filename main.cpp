#include "main.hpp"

int main() {
    CountryTest country = CountryTest();
    if (country.run() == main::failure)
        cout << "Erro no teste de país" << endl;
        return main::failure;
    
    cout << endl << endl << "Testes finalizados" << endl << endl;

    return main::success;
}

