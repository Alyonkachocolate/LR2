#ifndef LR2_EPLOYEE_H
#define LR2_EPLOYEE_H

#include <cstddef>
#include <iostream>

class eployeer {
private:
  std::string fio;
  size_t money = 0;
  size_t days = 0;

public:
  eployeer(std::string fio, size_t money, size_t days);

  virtual size_t salary();

  void print();
};

eployeer::eployeer(std::string fio, size_t money, size_t days)
    : fio(fio), money(money), days(days) {
  if (fio == "" || money < 0 || days < 0)
    throw std::invalid_argument("Wrong data");
}
size_t eployeer::salary() { return money * days; }
void eployeer::print() {
  std::cout << "Eployeer" << std::endl;
  std::cout << "Name:         " << fio << std::endl;
  std::cout << "Daily salary: " << money << std::endl;
  std::cout << "Days:         " << days << std::endl;
  std::cout << "As a result, salary = " << eployeer::salary() << "$"
            << std::endl;
  std::cout << std::endl;
}
#endif // LR2_EPLOYEE_H
