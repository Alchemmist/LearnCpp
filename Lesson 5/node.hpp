template <typename T>
class Node {
    T value;
    Node* left, *right;
    
public:
    Node(T val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }

    Node* getLeft() {
        return left;
    }

    Node* getRight() {
        return right;
    }
    
    T getValue() {
        return value;
    }

    void setLeft(Node* left) {
        this->left = left;
    }

    void setRight(Node* right) {
        this->right = right;
    }

    void setValue(T val) {
        value = val;
    }
};