#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v1;
  // 멤버함수 push_back: 해당 vector의 가장 뒤에 element를 추가함
  v1.push_back(1); // 현재 v1: { 1 }
  v1.push_back(2); // 현재 v1: { 1, 2 }

  // 멤버함수 back: vector의 가장 첫번째 "reference" 를 반환함
  // 첫번째 element를 반환한다는 말과 동일한 의미
  cout << v1.back() << endl;
  v1.pop_back(); // 멤버함수 pop_back: 가장 뒤의 element를 하나 뽑아냄 반환형은 void
  // 현재 v1: { 1 }
  cout << v1.back() << endl;
  v1.pop_back();


  v1.push_back(3);
  v1.push_back(4);
  v1.push_back(5);

  // 멤버함수 begin, end: 각각 vector의 가장 첫번째, 마지막 "iterator"를 반환함
  // 포인터를 반환한다는 의미이므로 포인터 연산을 통해 벡터의 element에 접근이 가능함
  // 멤버함수 at 을 사용하는 것과 같은 효과를 지님
  for (auto iter = v1.begin(); iter != v1.end(); iter++) {
    cout << *iter << endl;
  }
  // 다음 for loop 은 위 for loop 과 동일한 결과를 냄
  for (int i = 0; i < v1.size(); i++) {
    cout << v1.at(i) << endl;
  }
  return 0;
}
