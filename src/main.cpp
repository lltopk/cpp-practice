#include <iostream>
#include "head/sum.h"

int main(int, char**){
    std::cout << "Hello, from cpp-practice!\n";
    //帮我写几个变量并打印它们的值
    int a = 10;
    double b = 20.5;
    std::string c = "cpp-practice";
    std::cout << "Integer a: " << a << "\n";
    std::cout << "Double b: " << b << "\n";
    std::cout << "String c: " << c << "\n";
    //调用sum函数并打印结果
    int s = sum(1,2);
    printf("sum = %d", s);
}

