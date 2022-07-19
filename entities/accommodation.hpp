#ifndef ENTITIES_ACCOMMODATION_HPP_
#define ENTITIES_ACCOMMODATION_HPP_
#include "../domains/grade.hpp"
#include "../domains/city.hpp"
#include "../domains/country.hpp"
#include "../domains/code.hpp"
#include "../domains/description.hpp"

/**
 * @brief Classe acomodação
 *
 * @author Fernando Jorge - 200017829
 *
 * Classe para a entidade Acomodação, com todos os campos exigidos.
 */
class Accommodation
{
private:
  Code code;
  City city;
  Country country;
  Grade grade;
  Description description;

public:
  /**
   * @brief construtor padrão da entidade acomodação
   */
  Accommodation();

  /**
   * @brief atualiza o código da entidade
   *
   * @param code novo código da entidade
   * @throw invalid_argument caso o valor não seja válido
   */
  void setCode(string);

  /**
   * @brief atauliza a cidade dessa entidade
   *
   * @param city nome da nova cidade
   * @throw invalid_argument caso o valor não seja válido
   */
  void setCity(string);

  /**
   * @brief atualiza o país da entidade
   *
   * @param country novo país da entidade
   * @throw invalid_argument caso o valor não seja válido
   */
  void setCountry(string);

  /**
   * @brief atualiza o valor da grade da entidade
   *
   * @param grade novo valor da grade de entidade
   * @throw invalid_argument caso o valor não seja válido
   */
  void setGrade(int);

  /**
   * @brief atualiza a descrição da entidade
   *
   * @param description novo valor da descrição da entidade
   * @throw invalid_argument caso o valor não seja válido
   */
  void setDescription(string);

  // Get Methods

  /**
   * @brief retorna o valor do código da entidade
   *
   * @return string com o código da entidade
   */
  string getCode();

  /**
   * @brief retorna o valor da cidade da entidade
   *
   * @return string com a cidade da entidade
   */
  string getCity();

    /**
   * @brief retorna o valor do país da entidade
   *
   * @return string com o país da entidade
   */
  string getCountry();

  /**
   * @brief retorna o valor da grade da entidade
   *
   * @return string com a grade da entidade
   */
  unsigned int getGrade();

  /**
   * @brief retorna o valor da descrição da entidade
   *
   * @return string com a descrição da entidade
   */
  string getDescription();

};

inline string Accommodation::getCode()
{
  return code.getCode();
}

inline string Accommodation::getCity()
{
  return city.getCity();
}

inline string Accommodation::getCountry()
{
  return country.getCountry();
}

inline unsigned int Accommodation::getGrade()
{
  return grade.getGrade();
}

inline string Accommodation::getDescription()
{
  return description.getDescription();
}

inline Accommodation::Accommodation(){};

#endif // ENTITIES_ACCOMMODATION_HPP_