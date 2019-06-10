#include <iostream>
using namespace std;

struct Vector {
    int sz;       // number of elements
    double* elem; // pointer to elements
};

void vector_init(Vector& v, int s);
double read_and_sum(int s);

int main() {
    int sum = 0, n = 0;
    cout << "how many elements: ";
    cin >> n;
    sum = read_and_sum(n);
    cout << "sum is: " << sum << '\n';
    return 0;
}

void vector_init(Vector& v, int s) {
    v.elem = new double[s]; // allocate an array of s doubles
    v.sz = s;
}

// read s integers from cin and return their sum; s is assumed to be positive
double read_and_sum(int s) {
    Vector v;
    vector_init(v,s); // allocate s elements for v
    for (int i=0; i!=s; ++i) {
        cout << "v[" << i << "]: ";    
        cin>>v.elem[i]; // read into elements
    }
    double sum = 0;
    for (int i=0; i!=s; ++i)
        sum+=v.elem[i]; // take the sum of the elements
    return sum;
}