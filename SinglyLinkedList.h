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
        std::shared_ptr<Node<T>> getAt(const std::size_t pos) const;
        bool setAt(const std::size_t pos, const T &elem);
        bool insertAt(std::size_t pos, const T &elem);
        // T removeAt(std::size_t pos);
        void print() const;
        ~SinglyLinkedList() = default;
};
#endif