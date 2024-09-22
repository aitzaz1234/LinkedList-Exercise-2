#include "LinkedList.h"
#include <iostream>

using namespace std;

int main() {
    LinkedList list;

    list.insertBeg(1, "Ali");
    list.insertEnd(2, "Ahmed");
    list.insertEnd(3, "Furqan");

    cout << "List after insertions: ";
    Node* temp = list.head;
    while (temp != nullptr) {
        cout << temp->studentName << " ";
        temp = temp->next;
    }
    cout << endl;

    searchStudentByID(list, 2);
    searchStudentByID(list, 4);

    list.deleteNode(2);
    cout << "List after deletion: ";
    temp = list.head;
    while (temp != nullptr) {
        cout << temp->studentName << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}