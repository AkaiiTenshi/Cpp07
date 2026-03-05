#include "Array.hpp"

// Default constructor
template <typename T>
Array<T>::Array() : _data(NULL), _size(0) {}

// Parametric constructor
template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
    // Value initialization: int() sets to 0, objects call default constructor
    _data = new T[n](); 
}

// Copy constructor (Deep Copy)
template <typename T>
Array<T>::Array(const Array& other) : _data(NULL), _size(0) {
    *this = other;
}

// Assignment operator (Deep Copy)
template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) {
        if (_data)
            delete[] _data;
        _size = other._size;
        _data = new T[_size]();
        for (unsigned int i = 0; i < _size; i++) {
            _data[i] = other._data[i];
        }
    }
    return *this;
}

// Destructor
template <typename T>
Array<T>::~Array() {
    if (_data)
        delete[] _data;
}

// Subscript operator (Read/Write)
template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _size)
        throw OutOfBoundsException();
    return _data[index];
}

// Subscript operator (Read-only)
template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= _size)
        throw OutOfBoundsException();
    return _data[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}
