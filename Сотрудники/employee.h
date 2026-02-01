#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

struct Employee {
    std::string surname;
    std::string name;
    std::string patronymic;
    int age;

    // Конструктор по умолчанию
    Employee() : surname(""), name(""), patronymic(""), age(0) {}

    // Конструктор с параметрами
    Employee(const std::string& s, const std::string& n, const std::string& p, int a)
        : surname(s), name(n), patronymic(p), age(a) {
    }

    std::string toString() const {
        return surname + " " + name + " " + patronymic + ", " + std::to_string(age) + " лет";
    }
};

#endif