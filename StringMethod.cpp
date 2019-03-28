#include "StringMethod.h"

vector<string> splitWithMultiDelit(string str, string rules) {
    std::vector<std::string> splits;
    char* cstr = const_cast<char*>(str.c_str());
    char* p = strtok(cstr, rules.c_str());
    while (p != NULL) {
        splits.push_back(p);
        p = strtok(NULL, rules.c_str());
    }
    return splits;
}


void showVectorString(vector<string> strs) {
    for (int i = 0; i <strs.size(); i++) {
        cout << strs[i] << endl;
    }
}
