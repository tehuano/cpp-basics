#include <iostream>
using namespace std;

class Vector {
  public:
    Vector(int s) : elem {new double[s]}, sz{s} { /* construct a Vector */
			
    }
    double& operator[](int i) { /* element access: subscripting */
        return elem[i];
    } 
    int size() {
        return sz;
    }
 private:
   double* elem; // pointer to the elements
   int sz; // the number of elements
};

double read_and_sum(int s);


int main() {
	int sum = 0, n = 0;
	cout << "how many elements: ";
	cin >> n;
	sum = read_and_sum(n);
	cout << "sum is: " << sum << '\n';
    return 0;
}

double read_and_sum(int s) {
    Vector v(s); // make a vector of s elements
    for (int i=0; i != v.size(); ++i) {
        cout << "v[" << i << "]: ";	
        cin>>v[i]; // read into elements
	}
    double sum = 0;
    for (int i=0; i!=v.size(); ++i)
        sum+=v[i]; // take the sum of the elements
    return sum;
}