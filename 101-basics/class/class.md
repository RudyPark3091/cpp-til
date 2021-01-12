클래스의 선언 -> Myclass.h   
클래스의 멤버함수의 정의 -> Myclass.cpp   
객체 생성 및 조작 -> MyclassMain.cpp   
의 형식으로 사용   

ex)
Myclass.h
``` cpp
#ifndef __MYCLASS_H__
#define __MYCLASS_H__

using namespace std;

class Myclass {
    private:
        int id;
        int width;
        int height;
        string color;
    
    public:
        void Init(const int id, const int width, const int height);
        void ShowInfo();
};


#endif
}
```
   
Myclass.cpp
``` cpp
#include <iostream>
#include "Myclass.h"

using namespace std;

void Myclass::Init(int id, int width, int height) {
    id = id;
    width = width;
    height = height;
    color = "white";
}

void Myclass::ShowInfo() {
    cout << "id :" << id << endl;
    cout << "width: " << width << endl;
    cout << "height: " << height << endl;
    cout << "color: " << color << endl;
}
```
   
MyclassMain.cpp
``` cpp
```

## class 와 struct
c++ 에서 struct와 class은 완전히 동일한 문법을 사용함  
하지만 둘이 차별되는 점이 존재  
class의 경우 기본적으로 모든 멤버가 private 이지만,  
struct의 경우 기본적으로 모든 멤버가 public 함  
  
ref: [stackoverflow.com/questions/1127396/struct-constructor-in-c]  
  
## 생성자
``` cpp 
struct Person {
	// 아래와 같이 선언하면 생성자에서 값을 할당하지 않을 때 쓰레기 값이 할당됨
	// int age;

	// 변수이름 { 값 } 으로 기본 값을 할당할 수 있음
	int age { 0 };
	std::string name;

	// 생성자: 변수이름(값)의 형태
	// {} 안에는 객체가 생성될 때 실행할 코드 작성
	Person(int i, string s) : age(i), name(s) {}
};

int main() {
	// struct 객체의 생성
	Person p {20, "Jason"};
	std::cout << p.name << " is " << p.age << " years old" << std::endl;
}
```

## 이동 생성자
객체가 가지고 있던 데이터의 소유권을 `복사없이` 새 변수로 이동하는 특수한 멤버 함수  
``` cpp 
Person(Person&& other);
```
``` cpp 
```

## 소멸자
객체가 소멸될 때 자동으로 실행되는 클래스의 멤버 함수  
소멸자는 생성자와 이름이 같아야 하고 앞에 `~`가 붙어야함  
소멸자는 인수와 반환값이 없음  


[stackoverflow.com/questions/1127396/struct-constructor-in-c]: https://stackoverflow.com/questions/1127396/struct-constructor-in-c

