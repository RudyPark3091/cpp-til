#include <iostream>

// 지금까지 std 네임스페이스에 선언된 함수들만 사용했지만
// 직접 네임스페이스를 선언하여 사용할 수 도 있음
namespace Garen {
  void ult() {
    std::cout << "Demacian Justice" << std::endl;
  }

  void passive() {
    std::cout << "Perserverance" << std::endl;
  }
}

namespace Galio {
  void ult() {
    std::cout << "Hero's Entrance" << std::endl;
  }

  void passive() {
    std::cout << "Colossal Smash" << std::endl;
  }
}

// 네임스페이스에 함수를 선언만 한 뒤 정의는 main함수 뒤에 할 수도 있음
namespace Gangplank {
  void ult();
  void passive();
}

namespace Parent {
  void hello() {
    std::cout << "Hello Parent" << std::endl;
  }

  void greet() {
    std::cout << "Greetings" << std::endl;
  }

  namespace Son {
    void hello() {
      std::cout << "Hello Son" << std::endl;
    }
  }
}

int main() {
  // :: 연산자로 네임스페이스에 접근가능
  Garen::ult(); // 출력: Demacian Justice
  Galio::ult(); // 출력: Hero's Entrance
  Gangplank::ult(); // 출력: Cannon Barrage

  Parent::hello(); // 출력: Hello Parent
  Parent::Son::hello(); // 출력: Hello Son

  // using 키워드를 통해 네임스페이스 함수를 명시할 수 있음
  // 이후 함수 사용시 네임스페이스 키워드를 생략가능
  using Parent::hello;
  hello();
  // greet(); <- 에러발생 Parent::greet()으로 수정해야 작동
  Parent::Son::hello();

  // namespace 키워드로 네임스페이스 alias를 설정할 수 있음
  namespace son = Parent::Son;
  son::hello();
  return 0;
}

// 네임스페이스 함수의 선언과 정의의 분리
namespace Gangplank {
  void ult() {
    std::cout << "Cannon Barrage" << std::endl;
  }

  void passive() {
    std::cout << "Trial by Fire" << std::endl;
  }
}
