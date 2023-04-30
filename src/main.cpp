#include "BPT-with-space-recycling.hpp"
// #define DEBUG
int main() {
#ifdef DEBUG
    system("rm -rf ull");
#endif
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    BPlusTree<myString, int> ull("ull");
    int T;
    for (cin >> T; T; --T) {
        char opt[68]; int val;
        cin >> opt;
        if (!strcmp(opt, "insert")) {
            cin >> opt >> val;
            myString tmp(opt);
            Element<myString, int> t(tmp, val);
            ull.realInsert(t);
        }
        else if (!strcmp(opt, "delete")) {
            cin >> opt >> val;
            myString tmp(opt);
            Element<myString, int> t(tmp, val);
            ull.realDelete(t);
        }
        else if (!strcmp(opt, "find")) {
            cin >> opt;
            myString tmp(opt);
            ull.find(tmp);
        }
        else if (!strcmp(opt, "findall")) {
            ull.findall();
        }
        else {
            exit(1);
        }
    }
    return 0;
}