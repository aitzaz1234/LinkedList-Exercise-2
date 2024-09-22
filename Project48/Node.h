#pragma once

#include <string>

class Node {
public:
    int studentID;
    std::string studentName;
    Node* next;
    Node(int id, const std::string& name);
};