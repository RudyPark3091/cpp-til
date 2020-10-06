#include <iostream>
/* #include <stdio.h>
 * #include <cstdio>
 * include 문은 c와 동일하게 작성한다. 
 * c++의 표준 입출력 라이브러리는 iostream 이다
 */

int main(void) {
  // 나중에 알게 될것이지만 std:: 는 std 네임스페이스를 의미한다.
  // 여기서는 출력을 위해 std 네임스페이스에 선언된 cout을 사용한다는것만 알아두자.
  // 문자열 리터럴은 "(double quotes)를 사용하고 한글자 문자열은 '(single quotes)를 사용한다.
  std::cout << "Hello World!" << std::endl;
  return 0;
}