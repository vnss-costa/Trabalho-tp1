#include "user.hpp"
using namespace std;


User::User(Email email)
{
    this->email = email;
}

User::User(Email email, Name name)
{
    this->email = email;
    this->name = name;
}

User::User(Email email, Name name, Password password)
{
    this->email = email;
    this->name = name;
    this->password = password;
}

User::User(Email email, Name name, Password password, Idiom idiom)
{
    this->email = email;
    this->name = name;
    this->password = password;
    this->idiom = idiom;
}

User::User(Email email, Name name, Password password, Idiom idiom, Date date)
{
    this->email = email;
    this->name = name;
    this->password = password;
    this->idiom = idiom;
    this->date = date;
}

User::User(Email email, Name name, Password password, Idiom idiom, Date date, Description description)
{
    this->email = email;
    this->name = name;
    this->password = password;
    this->idiom = idiom;
    this->date = date;
    this->description = description;
}

string User::getEmail()
{
    return email.getEmail();
}

string User::getName()
{
    return name.getName();
}

string User::getPassword()
{
    return password.getPassword();
}

string User::getIdiom()
{
    return idiom.getIdiom();
}

string User::getDate()
{
    return date.getDate();
}

string User::getDescription()
{
    return description.getDescription();
}

void User::setEmail(string email)
{
    this->email.setEmail(email);
}

void User::setName(string name)
{
    this->name.setName(name);
}

void User::setPassword(string password)
{
    this->password.setPassword(password);
}

void User::setIdiom(string idiom)
{
    this->idiom.setIdiom(idiom);
}

void User::setDate(string date)
{
    this->date.setDate(date);
}

void User::setDescription(string description)
{
    this->description.setDescription(description);
}
