#include <iostream> 
 
 
template <typename T>
class DataStructure { 
    public: 
    virtual void push(T) = 0; 
 
    virtual void pop() = 0; 
 
    virtual void print() = 0; 
 
    virtual int size() = 0; 
}; 
 
 
template <typename T>
class Node { 
    private: 
    T value; 
    Node<T>* next; 
 
    public: 
    Node(T value) { 
        this->value = value; 
        next = nullptr; 
    } 
 
    Node(T value, Node<T>* next) { 
        this->value = value; 
        this->next = next; } 
 
    T getValue() { 
        return value; 
    } 
 
    Node<T>* getNext() { 
        return next; 
    } 
     
    void setNext(Node<T>* node) { 
        next = node; 
    } 

    void setValue(T val) {
        value = val;
    }
 
}; 


template <typename T>
class Stack : public DataStructure<T> { 
    private: 
    Node<T>* top; 
 
    public: 
    Stack() : top(nullptr) {} 
 
    // top = new Node<T>(value) 
    Stack(T val) : top(new Node<T>(val)) {} 
 
    ~Stack() { 
        while (top != nullptr) { 
            Node<T>* temp = top; 
            top = top->getNext(); 
            delete temp; 
        } 
    } 
 
    void push(T val) override { 
        if (top == nullptr) { 
            top = new Node<T>(val); 
        } else { 
            Node<T>* ptr = new Node<T>(val); 
            ptr->setNext(top); 
            top = ptr; 
        } 
    } 
 
    void pop() override { 
        if (top == nullptr) return; 
 
        Node<T>* temp = top; 
        top = top->getNext(); 
        delete temp; 
    } 
 
    void print() override { 
        Node<T>* cur = top; 
        while (cur != nullptr) { 
            std::cout << cur->getValue() << " "; 
            cur = cur->getNext(); 
        } 
        std::cout << std::endl; 
    } 
 
    int size() override { 
        int result  = 0; 
        Node<T>* cur = top; 
        while (cur != nullptr) { 
            result++; 
            cur = cur->getNext(); 
        } 
        return result; 
    } 
}; 


template <typename T>
class Queue : public DataStructure<T> { 
    private: 
        Node<T>* front, *back; 
 
    public: 
        Queue() : front(nullptr), back(nullptr) {} 
 
        Queue(T val) : front(new Node<T>(val)), back(front) {} 
 
        ~Queue() { 
            while (front != nullptr) { 
                Node<T>* temp = front; 
                front = front->getNext(); 
                delete temp; 
            } 
        } 
 
 
    void push(T val) override { 
        if (back == nullptr) { 
            back = new Node<T>(val); 
            front = back; 
        } else { 
            back->setNext(new Node<T>(val)); 
            back = back->getNext(); 
        } 
    } 
 
    void pop() override { 
        if (front == nullptr) return; 
 
        Node<T>* temp = front; 
        front = front->getNext(); 
        delete temp; 
    } 
 
    void print() { 
        Node<T>* cur = front; 
        while (cur != nullptr) { 
            std::cout << cur->getValue() << " "; 
            cur = cur->getNext(); 
        } 
        std::cout << std::endl; 
    } 
 
    int size() override { 
        int result  = 0; 
        Node<T>* cur = front; 
        while (cur != nullptr) { 
            result++; 
            cur = cur->getNext(); 
        } 
        return result; 
    } 
}; 
 

int main() { 
    Stack<double> st;
    st.push(2.5);
    st.push(3.0);
    st.print();

    return 0; 
}