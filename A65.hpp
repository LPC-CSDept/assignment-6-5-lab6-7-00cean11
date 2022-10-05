//

#include <iomanip>
#include <iostream>
using namespace std;
void getInput(int &a, int &b, int &c);
void swap(int &a, int &b, int &c);
void swaptwo(int &a, int &b);
int main (){
    int a, b, c;
    getInput(a, b, c);
    swap(a, b, c);
    swaptwo(a, b);
}
void getInput(int &num1, int &num2, int &num3) {
  while (true) {
    cout << "Enter your value: ";
    cin >> num1 >> num2 >> num3;
    if ((num1 > 0) && (num2 > 0) && (num3 > 0))
      break;
  }
}
void swap(int &a, int &b, int &c){
    int temp;
    temp = b;
    b = a;
    a = c;
    c = temp;
  
}
void swaptwo(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

// swaptwo() ; to swap two values (a, b) to (b, a)
