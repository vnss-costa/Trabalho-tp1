#include "review.hpp"
using namespace std;

Review::Review() {}

Review::Review(Code code) {
    this->code = code;
}

Review::Review(Code code, Grade grade) {
    this->code = code;
    this->grade = grade;
}

Review::Review(Code code, Grade grade, Description description) {
    this->description = description;
    this->code = code;
    this->grade = grade;
}

string Review::getCode() {
    return code.getCode();
}

unsigned int Review::getGrade() {
    return grade.getGrade();
}

string Review::getDescription() {
    return description.getDescription();
}

void Review::setCode(string code) {
    this->code.setCode(code);
}

void Review::setGrade(unsigned int grade) {
    this->grade.setGrade(grade);
}

void Review::setDescription(string description) {
    this->description.setDescription(description);
}
