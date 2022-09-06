#include <iostream>

#include "./domains/tests/country_test.hpp"
#include "./domains/tests/date_test.hpp"
#include "./domains/tests/description_test.hpp"
#include "./domains/tests/password_test.hpp"
#include "./domains/tests/city_test.hpp"
#include "./domains/tests/code_test.hpp"
#include "./domains/tests/email_test.hpp"
#include "./domains/tests/name_test.hpp"
#include "./domains/tests/idiom_test.hpp"
#include "./domains/tests/grade_test.hpp"

#include "./entities/tests/accommodation_test.hpp"
#include "./entities/tests/review_test.hpp"
#include "./entities/tests/user_test.hpp"

#include "./Controllers/Apresentacao/autenticacao/autenticacao.h"
#include "./Controllers/Apresentacao/conta/conta.h"

#include "./Interfaces/Apresentacao/autenticacao.h"
#include "./Interfaces/Apresentacao/conta.h"
#include "./Interfaces/Servicos/autenticacao.h"
#include "./Interfaces/Servicos/conta.h"

#include "./stubs/stubs.h"
#include "./Controllers/Apresentacao/ControladoraApr/controladoraApresentacao.h"

/**
 * @brief Classe principal para conexão dos arquivos
 *
 * @author Fernando Jorge - 200017829
 */
class Main
{
public:
    static const int success = 0;
    static const int failure = 1;
};
