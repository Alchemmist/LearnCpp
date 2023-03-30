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
 
 
class Queue : public DataStructure { 
    private: 
        Node* front, *back; 
 
    public: 
        Queue() : front(nullptr), back(nullptr) {} 
 
        Queue(int val) : front(new Node(val)), back(front) {} 
 
        ~Queue() { 
            while (front != nullptr) { 
                Node* temp = front; 
                front = front->getNext(); 
                delete temp; 
            } 
        } 
 
 
    void push(int val) override { 
        if (back == nullptr) { 
            back = new Node(val); 
            front = back; 
        } else { 
            back->setNext(new Node(val)); 
            back = back->getNext(); 
        } 
    } 
 
    void pop() override { 
        if (front == nullptr) return; 
 
        Node* temp = front; 
        front = front->getNext(); 
        delete temp; 
    } 
 
    void print() { 
        Node* cur = front; 
        while (cur != nullptr) { 
            std::cout << cur->getValue() << " "; 
            cur = cur->getNext(); 
        } 
        std::cout << std::endl; 
    } 
 
    int size() override { 
        int result  = 0; 
        Node* cur = front; 
        while (cur != nullptr) { 
            result++; 
            cur = cur->getNext(); 
        } 
        return result; 
    } 
}; 
 
 
int main() { 
    Queue que; 
    que.push(1); 
    que.push(2); 
    que.push(3); 
    que.print(); 
    return 0; 
}
