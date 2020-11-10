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
