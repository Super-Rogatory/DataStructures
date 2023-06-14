#ifndef _SINGLY_LINKED_LIST_H_
#define _SINGLY_LINKED_LIST_H_
#include "Node.h"
#include "Node.cpp"
template<class T>
class SinglyLinkedList {
    private:
        std::shared_ptr<Node<T>> head;
        std::shared_ptr<Node<T>> tail;
        std::size_t size;
    public:
        SinglyLinkedList();
        void push(const T &elem);
        T pop();
        void unshift(const T &elem);
        T shift();
        void print() const;
        ~SinglyLinkedList() = default;
};
#endif