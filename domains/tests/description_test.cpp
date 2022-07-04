#include <string>
#include <iostream>
#include "description_test.hpp"
using namespace std;

int DescriptionTest::run() {
    create();

    test_validation("Descrição válida");
    test_invalidation("....");
    test_invalidation("'  '");
    test_invalidation("");
    test_invalidation("01234567890123456789012345678901234567891");

    destroy();

    return result;
}

void DescriptionTest::create() {
    description = new Description("abacate teste");
    result = success;
}

void DescriptionTest::destroy() {
    delete description;
}

void DescriptionTest::test_validation(string description) {
    cout << "Espera-se que aceite a entrada" << endl;
    try {
        cout << "Descrição testada: " << description << endl
             << endl;
        this->description->setDescription(description);
        cout << "Descrição aceita!" << endl;
    } catch (invalid_argument &message) {
        cout << "Descrição rejeitada!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        result = failure;
    }
    cout << "\n================================\n";
}

void DescriptionTest::test_invalidation(string description) {
    cout << "Espera-se que rejeite a entrada" << endl;
    try {
        cout << "Descrição testada: " << description << endl
             << endl;
        this->description->setDescription(description);
        cout << "Descrição aceita!" << endl;
        result = failure;
    }
    catch (invalid_argument &message) {
        cout << "Descrição rejeitada!" << endl;
        cout << "Erro: " << message.what() << endl;
    }
    cout << "\n================================\n";
}
