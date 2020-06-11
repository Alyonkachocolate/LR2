#ifndef LR2_COMPANY_H
#define LR2_COMPANY_H

#include <cstddef>
#include <iostream>

class company {
private:
  double coefficient = 0;
  std::string name;

public:
  double GetCoef();
  std::string GetName() {return name;};
  company(std::string, double);
  virtual void print();
};

company::company(std::string name, double c) : name(name), coefficient(c) {}
void company::print() {
  std::cout << "Company" << std::endl;
  std::cout << "Company name: " << name << std::endl;
  std::cout << "Сoefficient:   " << coefficient << std::endl;
  std::cout << std::endl;
}
double company::GetCoef() { return coefficient; }

#endif // LR2_COMPANY_H
