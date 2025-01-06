// Rowan Ess
// 10-1-24
// CS II
// the class definition for a dynamic array that grows with truth

#ifndef OBJECT_CON_GUARD
#define OBJECT_CON_GUARD

#include <iostream>

class Binary {
    public:
        Binary();
        Binary(const Binary&);
        void operator=(const Binary&);
        ~Binary();

        void operator++();
        void operator--();

        friend std::ostream& operator<<(std::ostream&, Binary);

    private:
        bool *binaryNum;
        int currentSize;
};

#endif
