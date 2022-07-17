#ifndef DESCRIPTION
#define DESCRIPTION
#include <string>
using namespace std;

/**
 * @brief Classe para o domínio descrição
 *
 * @author Fernando Jorge - 200017829
 */
class Description
{
private:
  string description;

  void isValid(string description);

public:
  /**
   * @brief Método construtor da descrição
   */
  Description();

  /**
   * @brief Construtor que seleciona a descrição informada
   *
   * @param description é a descrição que se deseja inserir
   * @throw invalid_argument caso não seja uma descrição válida
   */
  Description(string description);

  /**
   * @brief Retorna qual a descrição armazenada no objeto
   *
   * @return string com o nome da descrição
   */
  string getDescription();

  /**
   * @brief Configura a descrição para o valor inserido
   *
   * @param description com o nome a ser inserido
   * @throw invalid_agument caso o valor seja inválido
   */
  void setDescription(string description);
};

inline string Description::getDescription()
{
  return description;
}

inline void Description::setDescription(string description)
{
  isValid(description);
  this->description = description;
}

inline Description::Description(){};

#endif
