#include "tree.hpp"

int main() {
    Tree<int> tr;

    tr.add(2);
    tr.add(1);
    tr.add(3);
    tr.add(4);
    tr.add(9);
    tr.add(1);
    tr.add(6);
    tr.add(3);
    tr.print();

    return 0;
}