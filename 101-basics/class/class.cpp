#include <iostream>
using namespace std;

// 구조체의 선언
struct Vehicle {
  int speed;
  int fee;
};

void showInfo(const Vehicle& vehicle) {
  cout << "speed: " << vehicle.speed << endl;
  cout << "fee :" << vehicle.fee << endl;
}

int main() {
  Vehicle bus = { 50, 1200 };
  showInfo(bus);
  return 0;
}
