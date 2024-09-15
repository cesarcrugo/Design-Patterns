#include <singleton.hpp>
#include <iostream>
#include <string>

int main(int argc, char **argv){
    std::cout << Singleton::getInstance()->greet() << std::endl;

    return 0;
}