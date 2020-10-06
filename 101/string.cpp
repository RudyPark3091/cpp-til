#include <iostream>

int main() {
  // string 리터럴은 std 네임스페이스 안에 선언되어 있다
  std::string str1 = "Hello World";
  // string 변수로 다른 string 변수를 초기화하는 것이 가능하다
  std::string str2 = str1;
  std::string str3("이렇게 선언할수도 있다");

  std::cout << str1 << std::endl;
  std::cout << str2 << std::endl;
  std::cout << str3 << std::endl;

  // string 을 int형으로 변환하는 방법 -> std 네임스페이스의 stoi 함수를 사용한다.
  std::string str4 = "100";
  int str5 = std::stoi(str4);

  std::cout << str4 + "100" << std::endl; // 출력결과: 100100
  std::cout << str5 + 100 << std::endl; // 출력결과: 200

  // 문자열 인덱싱 =================================
  std::string str6 = "0123456789";
  std::cout << "\n문자열 인덱싱" << std::endl;
  // substr(a,b) 는 3번째 인덱스부터 b만큼의 character를 반환한다
  std::cout << str6.substr(3,5) << std::endl; // 출력결과: 34567
  return 0;
}
