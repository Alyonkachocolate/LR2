//
// Created by Alyonka on 27/03/2020.
//

#ifndef LR2_COOPERATOR_H
#define LR2_COOPERATOR_H

#include "company.h"
#include "eployee.h"
#include <iostream>
#include <utility>

class cooperator : public eployeer, public company {
public:
  cooperator(std::string fio, size_t money, size_t days, std::string name,
             double c);
  size_t salary() override;
  void print() override;
};
cooperator::cooperator(std::string fio, size_t money, size_t days,
                       std::string name, double c)
    : eployeer(std::move(fio), money, days), company(std::move(name), c) {}
size_t cooperator::salary() { return eployeer::salary()*GetCoef(); }
void cooperator::print() {
  std::cout << name << " еployeer" << std::endl;
  eployeer::print();
  company::print();
  std::cout << "The salary = " << salary() << "$" << std::endl;
}

#endif // LR2_COOPERATOR_H
