#pragma once
#include <string>
#include "test.pb.h"

class Person {
 public:
  Person() {}
  ~Person() {}

  void SetPerson(const std::string &name, int age);
  void SetBook(const std::string &bookName, float price);
  void Print();

 private:
  std::string name_;
  int age_;
  test::Book book_;
};
