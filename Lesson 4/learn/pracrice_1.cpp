#include <iostream> 
 
 
class DataStructure { 
    public: 
    virtual void push(int) = 0; 
 
    virtual void pop() = 0; 
 
    virtual void print() = 0; 
 
    virtual int size() = 0; 
}; 
 
 
class Node { 
    private: 
    int value; 
    Node* next; 
 
    public: 
    Node(int value) { 
        this->value = value; 
        next = nullptr; 
    } 
 
    Node(int value, Node* next) { 
        this->value = value; 
        this->next = next; 
    } 
 
    int getValue() { 
        return value; 
    } 
 
    Node* getNext() { 
        return next; 
    } 
     
    void setNext(Node* node) { 
        next = node; 
    } 
 
}; 
 
 
class Stack : public DataStructure { 
    private: 
    Node* top; 
 
    public: 
    Stack() : top(nullptr) {} 
 
    // top = new Node(value) 
    Stack(int val) : top(new Node(val)) {} 
 
    ~Stack() { 
        while (top != nullptr) { 
            Node* temp = top; 
            top = top->getNext(); 
            delete temp; 
        } 
    } 
 
    void push(int val) override { 
        if (top == nullptr) { 
            top = new Node(val); 
        } else { 
            Node* ptr = new Node(val); 
            ptr->setNext(top); 
            top = ptr; 
        } 
    } 
 
    void pop() override { 
        if (top == nullptr) return; 
 
        Node* temp = top; 
        top = top->getNext(); 
        delete temp; 
    } 
 
    void print() override { 
        Node* cur = top; 
        while (cur != nullptr) { 
            std::cout << cur->getValue() << " "; 
            cur = cur->getNext(); 
        } 
        std::cout << std::endl; 
    } 
 
    int size() override { 
        int result  = 0; 
        Node* cur = top; 
        while (cur != nullptr) { 
            result++; 
            cur = cur->getNext(); 
        } 
        return result; 
    } 
}; 
 
int main() { 
    return 0; 
}
