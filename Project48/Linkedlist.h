#pragma once

#include "Node.h"

class LinkedList {
public:
    Node* head;


    LinkedList();


    bool isEmpty() const;


    void insertBeg(int id, const std::string& name);


    void insertEnd(int id, const std::string& name);


    void deleteNode(int id);
};


void searchStudentByID(const LinkedList& list, int id);