#include <iostream>
using namespace std;

// count the number of occurrences of x in p[]
// p is assumed to point to a zero-ter minated array of char (or to nothing)
int count_x(char* p, char x) {
    if (p==nullptr)
        return 0;
    int count = 0;
    for (; *p!=0; ++p)
    if (*p==x)
        ++count;
    return count;
}

int main() {
    char text[] = "Hello world !!";
    int count = 0;
    count = count_x(text, 'o');
    cout << count << '\n';
    return 0;
}