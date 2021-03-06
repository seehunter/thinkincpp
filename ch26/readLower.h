//: C26:readLower.h
// Read a file into a container of string,
// forcing each line to lower case.
#include <iostream>
#include <fstream>
#include <string>

#include "../require.h"

using namespace std;

template<class SContainer>
void readLower(char* filename, SContainer& c) {
    ifstream in(filename);
    assure(in, filename);
    const int sz = 1024;
    char buf[sz];
    while (in.getline(buf, sz)) {
        // Force to lowercase:
        c.push_back(string(strlwr(buf)));
    }
} ///:~