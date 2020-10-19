#include <iostream>

void func1() {
  // string 리터럴은 std 네임스페이스 안에 선언되어 있다
  std::string str1 = "Hello World";
  // string 변수로 다른 string 변수를 초기화하는 것이 가능하다
  std::string str2 = str1;
  std::string str3("이렇게 선언할수도 있다");

  std::cout << str1 << std::endl;
  std::cout << str2 << std::endl;
  std::cout << str3 << std::endl;

  // size() 와 length()함수는 문자열의 길이를 반환한다
  // string은 결국 char[] 이므로 size == length이다 
  std::cout << "length: " << str1.length() << std::endl;
  std::cout << "size: " << str1.size() << std::endl;

  // string 을 int형으로 변환하는 방법 -> std 네임스페이스의 stoi 함수를 사용한다.
  std::string str4 = "100";
  int str5 = std::stoi(str4);

  std::cout << str4 + "100" << std::endl; // 출력결과: 100100
  std::cout << str5 + 100 << std::endl; // 출력결과: 200

}

void func2() {
  // 문자열 인덱싱 =================================
  std::string str6 = "0123456789";
  std::cout << "\n문자열 인덱싱" << std::endl;
  // substr(a,b) 는 3번째 인덱스부터 b만큼의 character를 반환한다
  std::cout << str6.substr(3,5) << std::endl; // 출력결과: 34567
  std::cout << str6.substr(7) << std::endl; // 출력결과: 789 - 자동으로 끝까지 출력해준다.

  // 당연히 string타입을 반환하므로 이렇게 사용할수도 있다.
  std::string str7 = str6.substr(5,8);
  std::cout << str7 << std::endl;
  // front()는 첫번째 character를 반환하고 back은 마지막 character를 반환한다
  std::cout << str7.front() << ' ' << str7.back() << std::endl << std::endl; // 출력결과 0 9

  // 특정 인덱스의 character를 뽑아내는 함수 at()
  std::cout << str7.at(4) << ' ' << str7.at(2) << std::endl;
}

void func3() {
  // 문자열 메모리 관리 =============================
  std::string str8 = "01234";

  /* 문자열은 길이가 늘어날 수 있는 객체이다
   * 따라서 메모리에 할당되는 크기도 커질 수 있으므로 여유를 둬 문자열보다 큰 메모리를 할당한다
   * 이와 관련하여 string객체의 capacity 함수를 호출하면 시스템이 문자열에 할당한 메모리 크기를 알 수 있다 */
  std::cout << "size: " << str8.size() << std::endl; // size: 5
  std::cout << "capcity: " << str8.capacity() << std::endl; // capacity: 15

  // 이때 size를 조절하는 함수로 resize()가 있음
  str8.resize(2);
  // resize는 반환형이 void라 cout안에서 실행할 수 없음
  // parameter 값이 원래 길이보다 작을 시 남은 문자열은 버림
  std::cout << "str: " + str8 << '\n' << "capacity: " << str8.capacity() << std::endl;
  // 두번째 parameter에 문자열을 주게 되면 남은 size만큼 그 문자열로 채움 but Capacity는 변하지 않는다
  str8.resize(5, '2');
  std::cout << "str: " + str8 << '\n';
  std::cout << "capacity: " << str8.capacity() << std::endl;
}

void func4() {
  // 문자열 입력받기 ================================
  std:: string str9;
  // std::cin 으로 문자열을 입력받을때 띄어쓰기가 포함된 문자열이라면 제대로 입력받지 못함
  std::getline(std::cin, str9);
  std::cout << "input string: " << str9 << std::endl;
}

int main() {
  func1();
  func2();
  func3();
  func4();
  return 0;
}
