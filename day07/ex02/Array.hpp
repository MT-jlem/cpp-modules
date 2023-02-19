#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
template <typename T>
class Array {
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &obj);
        Array   &operator=(const Array &obj);
        ~Array();
        T   &operator[](unsigned int i);
        unsigned int    size() const;

    private:
        T   *_data;
        unsigned int _size;
};


template <typename T>
Array<T>::Array(){
    _data = nullptr;
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n){
    _data = new T[n];
    _size = n;
}

template <typename T>
Array<T>::Array(const Array &obj){
    _data = nullptr;
    *this = obj;
}

template <typename T>
Array<T>::~Array(){
    delete[] _data;
}

template <typename T>
Array<T>   &Array<T>::operator=(const Array &obj){
    if(this != &obj){
        _size = obj._size;
        if (_data)
            delete[] _data;
        _data = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
            _data[i] = obj._data[i];
    }
    return *this;
}

template <typename T>
T   &Array<T>::operator[](unsigned int i){
    if (i >= _size)
        throw   std::exception();
    return _data[i];
}

template <typename T>
unsigned int    Array<T>::size() const{
    return _size;
}

#endif