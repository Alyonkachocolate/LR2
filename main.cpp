#include "Class/company.h"
#include "Class/cooperator.h"
#include "Class/eployee.h"
#include <iostream>
int main() {
  std::cout << "Information!" << std::endl;

  std::cout << "Eployeer" << std::endl;
  std::string fio;
  std::cout << "Name:         ";
  getline(std::cin, fio);
  size_t money;
  std::cout << "Daily salary: ";
  std::cin >> money;
  size_t days;
  std::cout << "Days:         ";
  std::cin >> days;
  std::cout << std::endl;

  eployeer ep(fio, money, days);

  std::cout << std::endl;

  std::cout << "Company" << std::endl;
  std::cout << "Company name: ";
  std::string name;
  std::cin.ignore();
  getline(std::cin, name);
  double c;
  std::cout << "Сoefficient:   ";
  std::cin >> c;
  std::cout << std::endl;

  company comp(name, c);

  cooperator cool(fio, money, days, name, c);
  cool.print();
  std::cout << "Salary: " << cool.salary() << std::endl;
  return 0;
}