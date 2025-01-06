//FROM THE MIND OF ROWAN ESS
//COMES A NEW DESIGN ON 22/11/2024
//FOR THE MINDS OF CS2!

#include <iostream>
#include <vector>
#include "btree.hpp"
#include <cassert>

int main() {

    btree<int> v;

    v.insert(8);
    v.insert(4);
    v.insert(1);
    v.insert(2);
    v.insert(7);
    v.insert(55);
    v.insert(16);
    v.insert(9);
    v.insert(87);
    v.insert(64);
    v.insert(99);

    std::cout << "\033[32mPREFIX:\033[91m\n";
    v.preorder(std::cout);
    std::cout << "\n\033[32mINFIX:\033[91m\n";
    v.inorder(std::cout);
    std::cout << "\n\033[32mPOSTFIX:\033[91m\n";
    v.postorder(std::cout);
    std::cout << "\n";

    std::cout << "\033[32mDEPTH:\n";
    std::cout << "\033[33mDepth of 16 is: \033[91m" << v.findDepth(16, 0) << "\033[0m\n";
    std::cout << "\033[33mDepth of 21 is: \033[91m" << v.findDepth(21, 0) << "\033[0m\n";
    std::cout << "\033[33mDepth of 2 is: \033[91m" << v.findDepth(2, 0) << "\033[0m\n";
    std::cout << "\033[33mDepth of 300 is: \033[91m" << v.findDepth(300, 0) << "\033[0m\n";

    std::cout << "\033[32mFIND:\n";
    std::cout << "\033[33mIs 16 present? \033[91m" << v.find(16) << "\033[0m\n";
    std::cout << "\033[33mIs 21 present? \033[91m" << v.find(21) << "\033[0m\n";
    std::cout << "\033[33mIs 2 present? \033[91m" << v.find(2) << "\033[0m\n";
    std::cout << "\033[33mIs 300 present? \033[91m" << v.find(300) << "\033[0m\n";

}










