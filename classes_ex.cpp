#include <iostream>

class calculation {
  int x;
  int y;
  
  public:
  int values(int a, int b);
};
  
  int calculation::values(int a , int b){
    return a*b;
    
  }

  
  
  
  
  int main(){
  calculation mycalc;
  
  std::cout << mycalc.values(6,12)<< std::endl;
  return 0;
}
