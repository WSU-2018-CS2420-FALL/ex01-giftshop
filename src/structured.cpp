#include <iostream>

using namespace std;

void travel(int to, int back, int& distance){
  distance += to + back;
}

void algorithm1(int n, int& distance){
  distance = 0;
  for(int i = 0; i < n; i++){
    travel(1, 0, distance);
  }
  travel(0, n, distance);
}

void algorithm2(int n, int& distance){
  distance = 0;
  for(int i = 1; i <= n; i++){
    travel(i, i, distance);
  }
}

int main(){
  int distance = 0;
  int n = 50;
  
  algorithm1(n, distance);
  cout << "A1: " << distance << endl;
  
  algorithm2(n, distance);
  cout << "A2: " << distance << endl;
  
  return 0;
}