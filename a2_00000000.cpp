#include <iostream>
using namespace std;

int main() {
  int num;
  int factors = 0; 

  cout<<"Enter a number:  ";
  cin>>num;

  for (int i = 1; i <= num; i++) {
    if (num % i == 0) {
      factors++;
    }
  }

  if (factors == 2) {
    cout<<"Prime";
  } else {
    cout<<"NOT Prime";
  }
}