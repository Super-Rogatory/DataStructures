#ifndef _NODE_H_
#define _NODE_H_
#include <iostream>
#include <memory>
// forward declation to avoid circular dependency where Node relies on Singly and Singly relies on Node. 
template<class T>
class SinglyLinkedList;

template<class T>
class Node {
    private:
        friend class SinglyLinkedList<T>;
        T data;
        std::shared_ptr<Node<T>> next;
    public:
        Node();
        explicit Node(T data);
        static int test();
        ~Node() = default;
};
#endif