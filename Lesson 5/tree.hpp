#include "node.hpp"
#include <iostream>

template <typename T>
class Tree {
    Node<T>* root;

    void clear(Node<T>* node) {
        if (node == nullptr) return;

        clear(node->getLeft());
        clear(node->getRight());

        delete node;
    }

    void add(Node<T>* node, T val)  {
        if (node == nullptr) node = new Node<T>(val);

        if (node->getLeft() != nullptr && val < node->getValue()) {
            add(node->getLeft(), val);
        } else if (node->getLeft() == nullptr && val < node->getValue()) {
            node->setLeft(new Node<T>(val));
            return;
        }

        if (node->getRight() != nullptr && val > node->getValue()) {
            add(node->getRight(), val);
        } else if (node->getRight() == nullptr && val > node->getValue()) {
            node->setRight(new Node<T>(val));
            return;
        }

        
    }

    void print(Node<T>* node, int index) {
        if (node == nullptr) return;

        index++;
        print(node->getRight(), index + 1);
        std::cout << std::endl;
        for (int i = 0; i < index; ++i) {
            std::cout << "\t";
        }
        std::cout << node->getValue();
        print(node->getLeft(), index + 1);
    }

public:
    Tree () {
        root = nullptr;
    }

    Tree(T val) {
        root = new Node<T>(val);
    }

    ~Tree() {
        clear(root);
    }

    void add(T val) {
        if (root == nullptr) {
            root = new Node<T>(val);
        } else {
            add(root, val);
        }
    }

    void print() {
        print(root, 0);
    }
};