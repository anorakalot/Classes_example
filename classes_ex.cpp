#include <iostream>

class calculation {
  int x;
  int y;
  
  public:
  int multiply(int a, int b);
};
  
  int calculation::multiply(int a , int b){
    return a*b;
    
  }

  
  
  
  
  int main(){
  calculation mycalc;
  
  std::cout << mycalc.multiply(6,12)<< std::endl;
  return 0;
}
