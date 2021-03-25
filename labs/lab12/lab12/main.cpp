#include <iostream>
using std::cout;

class Base {
public:
  virtual void fooVirtual() const { cout << "Base class virtual function\n"; }
  void fooNotVirtual() const { cout << "Base class non-virtual function\n"; }
};

class Derived : public Base {
public:
  void fooVirtual() const override { cout << "Derived class virtual function\n"; }
  void fooNotVirtual() const { cout << "Derived class non-virtual function\n"; }
};

int main() {
  Base b;
  Derived d;

  //  1) A base class pointer to the base class object.
  Base *bPb = &b;

  //  2) A base class pointer to the derived class object.
  Base *bPd = &d;

  //  3) A derived class pointer to the derived class object.
  Derived* dPd = &d;

  //  4) A base class reference to the base class object.
  Base& bRb = b;


  //  5) A base class reference to the derived class object.
  Base& bRd = d;

  //  6) A derived class reference to the derived class object.
  Derived& dRd = d;

  //1
  cout << "Calling non-virtual function from Base class pointer to Base: ";
  bPb->fooNotVirtual();

  cout << "Calling virtual function from Base class pointer to Base: ";
  bPb->fooVirtual();
  cout << std::endl;

  //Call both functions from pointers 2-6
  //2 
  cout << "Calling non-virtual function from Base class pointer to Derived: ";
  bPd->fooNotVirtual();

  cout << "Calling virtual function from Base class pointer to Derived: ";
  bPd->fooVirtual();
  cout << std::endl;

  //3
  cout << "Calling non-virtual function from Derived class pointer to Derived: ";
  dPd->fooNotVirtual();

  cout << "Calling virtual function from Derived class pointer to Derived: ";
  dPd->fooVirtual();
  cout << std::endl;

  //4
  cout << "Calling non-virtual function from Base class reference to Base: ";
  bRb.fooNotVirtual();

  cout << "Calling virtual function from Base class reference to Base: ";
  bRb.fooVirtual();
  cout << std::endl;

  //5
  cout << "Calling non-virtual function from Base class reference to Derived: ";
  bRd.fooNotVirtual();

  cout << "Calling virtual function from Base class reference to Derived: ";
  bRd.fooVirtual();
  cout << std::endl;
  
  //6
  cout << "Calling non-virtual function from Derived class reference to Derived: ";
  dRd.fooNotVirtual();

  cout << "Calling virtual function from Derived class reference to Derived: ";
  dRd.fooVirtual();
  cout << std::endl;

  return 0;
}