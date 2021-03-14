
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

#include<iterator>

int main()
{
    cout << "Enter two integers : ";

    std::istream_iterator<int> input(cin);
    int n1,n2;

    n1 = *input;
    ++input;
    n2 = *input;

    cout << "The sum is : ";

    std::ostream_iterator<int> output(cout);

    *output = n1+n2;
    cout << endl;

	return 0;
}
