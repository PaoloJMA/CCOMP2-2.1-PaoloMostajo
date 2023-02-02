#include <cstddef>                     
#include <iostream>
#include <string>

template <typename T, std::size_t i>   
class Array{

 public:
    std::size_t getSize() const {
        return i;
    }

private:
    T elem[i];
};

int main() {
    Array<int, 100> intArr;             
    std::cout << "Tamaño: " << intArr.getSize() << std::endl;
}