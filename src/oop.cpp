#include <iostream>

using namespace std;

class Traveler {
public:
  Traveler(int n): n(n), distance(0){}
  void travel(int to, int back){
    distance += to + back;
  }

  void algorithm1(){
    distance = 0;
    for(int i = 0; i < n; i++){
      travel(1, 0);
    }
    travel(0, n);
  }

  void algorithm2(){
    distance = 0;
    for(int i = 1; i <= n; i++){
      travel(i, i);
    }
  }
  
  int distanceTravled() const{
    return distance;
  }
  
  ~Traveler(){}
private:
  int n;
  int distance;
};


int main(){
  Traveler car(50);
  Traveler* bike = new Traveler(50);
  
  car.algorithm1();
  cout << "A1: " << car.distanceTravled() << endl;
  
  bike->algorithm2();
  cout << "A2: " << bike->distanceTravled() << endl;
  
  delete bike;
  
  return 0;
}