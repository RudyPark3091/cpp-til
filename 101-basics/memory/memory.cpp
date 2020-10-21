#include <iostream>
#include <string.h>
using namespace std;

// 전통적인 C방식의 메모리 동적 할당
char *mallocStr(int len) {
  char *strPointer = (char *)malloc(sizeof(char) * len);
  return strPointer;
}

// C++의 메모리 동적 할당
char *mallocCpp(int len) {
  char *strPointer = new char[len];
  return strPointer;
}

int main() {
  // memory alloc by "malloc" keyword
  char *newString = mallocStr(12);
  strcpy(newString, "Hello World");
  cout << newString << endl;
  // deallocating memory
  free(newString);

  // memory alloc by "new" keyword
  char *secondString = mallocCpp(12);
  strcpy(secondString, "Hello World");
  cout << secondString << endl;
  // deallocating memory
  delete[]secondString;

  int *integer = new int; // new 로 포인터 변수를 선언하면 stack 이 아닌 heap 영역에 할당됨
  int &ref1 = *integer; // 참조자를 통해 heap 영역에 접근함 -> int ref1 를 heap 영역에 선언한 것과 같은 효과

  *integer = 10;
  cout << "integer: " << *integer << endl;
  cout << "reference: " << ref1 << endl;
  // 두 경우 모두 출력은 10으로 동일

  ref1 = 20;
  cout << "integer: " << *integer << endl;
  cout << "reference: " << ref1 << endl;
  // 두 경우 모두 출력은 20으로 동일

  delete integer;
  

  return 0;
}
