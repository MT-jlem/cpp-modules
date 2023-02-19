#include <iostream>

typedef struct s_Data{
    int i ;
    char c;
}Data;

uintptr_t   serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}

Data*   deserialize(uintptr_t raw){
    return reinterpret_cast<Data*>(raw);
}

int main(){
    Data *ptr = new Data;

    std::cout << ptr << '\n';

    // uintptr_t   tmp = serialize(ptr);
    // std::cout << tmp << '\n';
    // Data *tmp2 = deserialize(tmp);
    // std::cout << tmp2 << '\n';

    std::cout << deserialize(serialize(ptr));

    delete ptr;
}