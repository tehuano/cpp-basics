#include <iostream>
using namespace std;

void copy_fct();

int main() {
    copy_fct();
    return 0;
}

void copy_fct() {
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10]; // to become a copy of v1
	
    for (auto i = 0; i != 10; ++i) // copy elements
        v2[i]=v1[i];
		
    for (auto x : v2) // for each x in v
        cout << x << ' ';
    cout << '\n';
}
