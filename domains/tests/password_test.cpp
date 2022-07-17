#include <string>
#include <iostream>
#include "password_test.hpp"
using namespace std;

int PasswordTest::run() {
    create();

    test_validation("a1#C2");
    test_invalidation("");
    test_invalidation("(@*@)");
    test_invalidation("#####");
    test_invalidation("aaaaa");
    test_invalidation("Baaaa");
    test_invalidation("1Baaa");

    destroy();

    return result;
}

void PasswordTest::create() {
    password = new Password("p$8aZ");
    result = success;
}

void PasswordTest::destroy() {
    delete password;
}

void PasswordTest::test_validation(string password) {
    cout << "Espera-se que aceite a entrada" << endl;
    try {
        cout << "Senha testada: " << password << endl
             << endl;
        this->password->setPassword(password);
        cout << "Senha aceita!" << endl;
    }
    catch (invalid_argument &message) {
        cout << "Senha rejeitada!" << endl;
        cout << "Mensagem de erro: " << message.what() << endl;
        result = failure;
    }
    cout << "\n================================\n";
}

void PasswordTest::test_invalidation(string password) {
    cout << "Espera-se que rejeite a entrada" << endl;
    try {
        cout << "Senha testada: " << password << endl
             << endl;
        this->password->setPassword(password);
        cout << "Senha aceita!" << endl;
        result = failure;
    }
    catch (invalid_argument &message) {
        cout << "Senha rejeitada!" << endl;
        cout << "Erro: " << message.what() << endl;
    }
    cout << "\n================================\n";
}
