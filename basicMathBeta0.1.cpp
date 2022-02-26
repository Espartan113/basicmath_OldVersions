#include <iostream>
using namespace std;
float absnum(float n);
float power(float x, float n);

int main(){

cout << power(2,.5);

  return 0;
}

//Absolute Number fuction
float absnum(float n){
  //Absolute value: if n negative: result=-n, if n positive, n result=n
  int result;

  if(n >= 0){
    result = n;
  }else if(n < 0){
    result = 0 - n;
  }else{
    cout << "There is an error." << endl;
  }

  return result;
}

//Power funtion (depends on absnum())
float power(float x /*number*/, float n /*exponential*/){
  // if n positive: x^n = x*x... n times
  // if n negative: x^n = 1/(x*x)... |n| times

  float result = x /*result variable*/;

  if (n > 0){
    for(int i = 2; i <= n; i++){
    result = result*x;
    }

  } else if(n == 0){
    result = 1;
  } else if(n < 0){
    n = absnum(n);

    for(int i = 2; i <= n; i++){
      result = result*x;
    }

    result = 1/result;

  }else{
    cout << "There's an error." << endl;
  }
  return result;
}
