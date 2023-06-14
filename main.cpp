#include "SinglyLinkedList.h"
#include "SinglyLinkedList.cpp" // for template classes, the implementation MUST be visible at the point of template object instantiation.
#include <string>
// Unlike with non template classes, all the compiler needs to know is that some particular class exists, and implementation details can be FOUND afterward.
// With template classes, implementation details needs to be KNOWN BEFORE object instantiation.

int main() {
    SinglyLinkedList<int> list;

    // Test case 1: Pushing elements to the list
    list.push(5);
    list.push(10);
    list.push(15);
    list.push(20);
    list.push(25);
    list.print();
    // The list should contain: [5, 10, 15, 20, 25]

    // Test case 2: Popping from a non-empty list
    int poppedElement = list.pop();
    list.print();
    // poppedElement should be 25
    // The list should contain: [5, 10, 15, 20]

    // Test case 3: Shifting from a non-empty list
    int shiftedElement = list.shift();
    list.print();
    // shiftedElement should be 5
    // The list should contain: [10, 15, 20]

    // Test case 4: Unshifting elements to the list
    list.unshift(30);
    list.unshift(35);
    list.unshift(40);
    list.print();
    // The list should contain: [40, 35, 30, 10, 15, 20]

    // Test case 5: Popping from a non-empty list again
    poppedElement = list.pop();
    list.print();
    // poppedElement should be 20
    // The list should contain: [40, 35, 30, 10, 15]

    // Test case 6: Shifting from a non-empty list again
    shiftedElement = list.shift();
    // shiftedElement should be 40
    // The list should contain: [35, 30, 10, 15]

    // Test case 7: Printing the list
    list.print();
    // The output should be: [35 30 10 15]

    // Test case 8: Getting an element within the list boundaries
    Node<int>& node = list.getAt(2);
    int element = node.getVal();
    std::cout << element << std::endl;
    // element should be 10

    // Test case 9: Getting an element outside the list boundaries
    try {
        Node<int>& invalidNode = list.getAt(10);
        // The above line should throw an exception
    } catch (const std::out_of_range& e) {
        // Expected exception caught
    }

    // Test case 10: Setting an element at a valid position
    bool success = list.setAt(1, 100);
    list.print();
    // success should be true
    // The list should contain: [35, 100, 10, 15]

    // Test case 11: Setting an element at an invalid position
    bool failure = list.setAt(10, 200);
    list.print();
    // failure should be false

    // Test case 12: Inserting an element at a valid position
    bool insertionSuccess = list.insertAt(2, 50);
    list.print();
    // insertionSuccess should be true
    // The list should contain: [35, 100, 50, 10, 15]

    // Test case 13: Inserting an element at the beginning
    list.insertAt(0, 5);
    list.print();
    // The list should contain: [5, 35, 100, 50, 10, 15]

    // Test case 14: Inserting an element at the end
    list.insertAt(list.getSize(), 25);
    list.print();
    // The list should contain: [5, 35, 100, 50, 10, 15, 25]

    // Test case 15: Removing an element at a valid position
    int removedElement = list.removeAt(3);
    list.print();
    // removedElement should be 50
    // The list should contain: [5, 35, 100, 10, 15, 25]

    // Test case 16: Removing an element at the beginning
    removedElement = list.removeAt(0);
    list.print();
    // removedElement should be 5
    // The list should contain: [35, 100, 10, 15, 25]

    // Test case 17: Removing an element at the end
    removedElement = list.removeAt(list.getSize() - 1);
    list.print();
    // removedElement should be 25
    // The list should contain: [35, 100, 10, 15]
    return 0;
}

