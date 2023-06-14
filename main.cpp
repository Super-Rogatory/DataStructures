#include "SinglyLinkedList.h"
#include "SinglyLinkedList.cpp" // for template classes, the implementation MUST be visible at the point of template object instantiation.
#include <string>
// Unlike with non template classes, all the compiler needs to know is that some particular class exists, and implementation details can be FOUND afterward.
// With template classes, implementation details needs to be KNOWN BEFORE object instantiation.
int main() {
    // Create a LinkedList of integers
    SinglyLinkedList<int> list1;

    // Test push and print methods
    list1.push(10);
    list1.push(20);
    list1.push(30);
    list1.print();  // Expected output: [ 10 20 30 ]

    // Test pop method
    int poppedElement = list1.pop();
    std::cout << "Popped element: " << poppedElement << std::endl;  // Expected output: 30
    list1.print();  // Expected output: [ 10 20 ]

    // Test unshift and shift methods
    list1.unshift(5);
    list1.unshift(2);
    list1.print();  // Expected output: [ 2 5 10 20 ]

    int shiftedElement = list1.shift();
    std::cout << "Shifted element: " << shiftedElement << std::endl;  // Expected output: 2
    list1.print();  // Expected output: [ 5 10 20 ]

    // Test pop from a list with one element
    poppedElement = list1.pop();
    std::cout << "Popped element: " << poppedElement << std::endl;  // Expected output: 20
    list1.print();  // Expected output: [ 5 10 ]

    // Test shift from a list with one element
    shiftedElement = list1.shift();
    std::cout << "Shifted element: " << shiftedElement << std::endl;  // Expected output: 5
    list1.print();  // Expected output: [ 10 ]

    poppedElement = list1.pop();
    
    // Test pop from an empty list
    try {
        poppedElement = list1.pop();
        std::cout << "Popped element: " << poppedElement << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;  // Expected output: Cannot pop from an empty linked list
    }

    // Test shift from an empty list
    try {
        shiftedElement = list1.shift();
        std::cout << "Shifted element: " << shiftedElement << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;  // Expected output: You cannot remove elements from an empty list.
    }

    // Test empty list
    SinglyLinkedList<std::string> list2;
    list2.print();  // Expected output: [ ]

    // Test push and print methods with strings
    list2.push("Hello");
    list2.push("World");
    list2.push("!");
    list2.print();  // Expected output: [ Hello World ! ]

    return 0;
}

