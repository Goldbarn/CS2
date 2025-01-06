// Rowan Ess
// CS2
// 11-1-24

#include "../string/string.hpp"
#include "../assembler/stack.hpp"
#include <iostream>
#include <fstream>
#include <vector>

int main( int argc, char** argv ) {
    
    std::fstream in(argv[1]);
    
    while (!in.eof()) {
        
        String t;
        stack<String> S;
        in >> t;

        while (t != ';') {
            
            if (t == ')') {
                String rhs = S.pop();
                String op = S.pop(); 
                String lhs = S.pop();
                S.push( op + ' ' + lhs + ' ' + rhs );
            }

            else if (t != '(') {
                S.push(t);
            }

          in >> t;
        
        }
        
        if (!in.eof()) { std::cout << S.pop() << " ;" << '\n'; }
    
    }
}

