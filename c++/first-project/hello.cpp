// # 
#include <iostream>

int main() {
    int a;
    int b;
    char c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    switch (c){
        case '+':
        std::cout << a+b;
        break;
        case '-':
        std::cout << a-b;
        break;
        case '*':
        std::cout << a*b;
        break;
        case '/':
        std::cout << a/b << a%b;
        break;
        default: std::cout << "No";
        }


}



