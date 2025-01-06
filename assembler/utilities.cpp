// Rowan Ess
// CS2
// 11-2-24

#include "utilities.hpp"
#include <vector>
#include "../string/string.hpp"

int tempNum = 1;

String intopost(String& in) {

    std::vector<String> V = in.split(' ');
    stack<String> S;
    int i = 0;

    while (V[i] != ';') {
            
        if (V[i] == ')') { 

            String rhs = S.pop();
            String op = S.pop(); 
            String lhs = S.pop();
            S.push( lhs + ' ' + rhs + ' ' + op );

        }

        else if (V[i] != '(') {
            
            S.push(V[i]);
            
        }

        ++i;
        
    }
        
    return S.pop();

}

String posttoassembler(String& in) {

    stack<String> result;
    std::vector<String> S = in.split(' ');
    int i = 0;
    String output;

    while (i < int(S.size())) {

        String t = S[i];

        if (t != '*' && t != '/' && t != '+' && t != '-') {

            result.push(t);
            
        }

        else {

            String right = result.pop();
            String left = result.pop();
            String temper = "TMP";
            temper += inttostr(tempNum);
            result.push(temper);
            output += evaluate(left, t, right);

        }

        ++i; 

    }

    tempNum = 1;
    return output;

}

String evaluate(String& left, String& t, String& right) {

    String out;

    out += "   ";
    out += "LD";
    out += "     ";
    out += left;
    out += '\n';
    out += "   ";
    
    if (t == '+') { out += "AD"; }
    else if (t == '*') { out += "MU"; }
    else if (t == '/') { out += "DV"; }
    else if (t == '-') { out += "SB"; }
    else { std::cerr << "Unknown Operator" << '\n'; }

    out += "     ";
    out += right;
    out += "\n";

    out += "   ";
    out += "ST";
    out += "     ";
    out += "TMP";
    out += (inttostr(tempNum));
    out += '\n';

    ++tempNum;

    return out;

}

String inttostr(int input) {

    String mid;

    while (input != 0) {

        mid += char((input % 10) + int('0'));
        input = input / 10;

    }

    String output;

    for (int i = mid.length() - 1; i >= 0; --i) {

        output += mid[i];

    }

    return output;

}
