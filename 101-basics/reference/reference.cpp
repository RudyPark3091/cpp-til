#include <iostream>
using namespace std;

void swapValue(int num1, int num2) {
  int tmp = num1;
  num1 = num2;
  num2 = tmp;
}

void swapReference(int &ref1, int &ref2) {
  int tmp = ref1;
  ref1 = ref2;
  ref2 = tmp;
}

// 참조자를 반환하는 함수
// 참조자를 반환 -> return 뒤 객체 그 자체를 반환
// 변수를 반환 -> return 뒤 객체의 복사본을 반환
int &returnRef(int &ref1) {
  ref1 += 10;
  return ref1;
}

int returnVal(int &ref1) {
  ref1 += 10;
  return ref1;
}

int returnConstRef(const int &ref1, const int &ref2) {
  return ref1 + ref2;
}

int main() {
  // reference: 참조자 - 메모리 공간에 붙여진 다른 이름
  // cf) 변수 - 메모리 공간에 붙여진 이름
  int num = 10;
  int &num1 = num;

  cout << num << ' ' << num1 << endl; // 1)
  cout << &num << ' ' << &num1 << endl; // 2)
  // 1, 2 모두 같은 값을 출력함

  // int &num2 = 10; - 1)
  // int &num2; - 2)
  // int &num2 = NULL - 3)
  // 위 3가지 경우 모두 불가능
  // 1: 상수 할당 불가능
  // 2: 선언하고 초기화하지 않기 불가능
  // 3: 널 할당 불가능

  // 포인터 변수의 참조자
  int num2 = 20;
  int *ptr = &num2;
  
  int &ref = num2;
  int *(&pref) = ptr;

  cout << num2 << endl;
  cout << *ptr << endl;
  cout << ref << endl;
  cout << *pref << endl;
  // 모두 num2의 값 20을 출력

  // Call-by-value vs Call-by-reference
  int num3 = 10;
  int num4 = 20;

  swapValue(num3, num4);
  cout << num3 << endl << num4 << endl;;
  // 출력결과: 10 20
  // Call-by-value : 함수 외부에 선언된 변수에 대한 변경이 불가능

  swapReference(num3, num4);
  cout << num3 << endl << num4 << endl;
  // 출력결과 : 20 10
  // Call-by-reference : 함수 외부에 선언된 변수에 대한 변경 가능
  // swapRef 호출 시 매개변수 ref1, ref2 가 num3, num4로 초기화됨

  int &num5 = returnRef(num4);
  int num6 = returnVal(num4);
  // 참조자를 반환하던, 변수를 반환하던 반환되는 값은 같음
  cout << num5 << " " << num6 << endl; // 출력결과는 30으로 동일
  // but, num5는 참조자를 반환받았으므로 객체 그대로를 반환받음
  // 그 말은 num4와 num5는 동일한 변수임을 의미함
  // 반면 num6는 변수를 반환받았으므로 객체의 복사본을 반환받음
  // 따라서 num4와 num6은 별개의 변수임

  cout << returnConstRef(10, 10) << endl; // 출력결과 : 20
  // 참조자에 상수를 할당할 수 없지만 const 키워드를 사용하면 할당할 수 있음
  return 0;
}
