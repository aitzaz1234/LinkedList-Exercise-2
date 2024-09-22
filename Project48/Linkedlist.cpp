#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList() : head(nullptr) {}

bool LinkedList::isEmpty() const {
    return head == nullptr;
}

void LinkedList::insertBeg(int id, const std::string& name) {
    Node* newNode = new Node(id, name);
    newNode->next = head;
    head = newNode;
}

void LinkedList::insertEnd(int id, const std::string& name) {
    Node* newNode = new Node(id, name);
    if (isEmpty()) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void LinkedList::deleteNode(int id) {
    if (isEmpty()) return;

    if (head->studentID == id) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    Node* previous = nullptr;
    while (current != nullptr && current->studentID != id) {
        previous = current;
        current = current->next;
    }

    if (current == nullptr) return;

    previous->next = current->next;
    delete current;
}

void searchStudentByID(const LinkedList& list, int id) {
    Node* temp = list.head;
    while (temp != nullptr) {
        if (temp->studentID == id) {
            cout << "Student Name: " << temp->studentName << endl;
            return;
        }
        temp = temp->next;
    }
    cout << "Student with ID " << id << " not found." << endl;
}