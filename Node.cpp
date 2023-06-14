#include "Node.h"

// default constructor, data() initializes the data property to whatever T's default value is. T data;
// set next to nullptr in default and overloaded constructor.
template<class T>
Node<T>::Node()
    :data(), next(nullptr) {}

template<class T>
Node<T>::Node(T d)
    :data(d), next(nullptr) {}

template<class T>
T Node<T>::getVal() const {
    return this->data;
}