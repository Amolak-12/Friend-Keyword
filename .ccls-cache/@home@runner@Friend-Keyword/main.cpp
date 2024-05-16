#include <iostream>
using namespace std;

class abc{
  private:
    int a;
    int b;
  public:
    abc(int _x, int _y) :a(_x), b(_y) {
      cout << "Constructor" << endl;
    }
  int getA() const {
  return a;
  }
  void setA(int _a) {
  a = _a;
  } 
  int getB() const {
  return b;
  }
  void setB(int _b) {
  b = _b;
  }

// Making class ab a friend so that it can take the private members of class abc
  friend class ab;

};

class ab{
  public:
    void fun(const abc &abcd) {
      cout << abcd.getA() << endl;
      cout << abcd.getB() << endl;
      //Use of Friend keyword through which we can access private members of class abc
      cout << abcd.a << endl;
      cout << abcd.b << endl;
      
    }

};
int main() {

  abc abcd(10, 20);
  ab abcde;
  abcde.fun(abcd);
  
}