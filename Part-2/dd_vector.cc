//Testing Standard Library vector class template
//element-manipulation functions
#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<iterator>
int main()
{
    const int SIZE = 6;
    int a[SIZE] = { 1, 2, 3, 4, 5, 6 };

    //creates integer vector v annd initializes it with the contents
    //of integer array a from location a to a+SIZE
    vector< int > v(a, a+SIZE);

    //defines ostream_iterator called output that can be used to output
    //integers separated by single space via cout. It is type-safe ouput
    //mechanism that will output only values of type int. The first argument
    //specifies the output stream and the second argument is a string
    //specifying separator character. i.e., a space character
    ostream_iterator<int> output( cout, " " ); //uses header <iterator>
    
    cout << "Vector v contains : ";
    //uses algorithm copy from the standard library to output the
    //entire contents of array
    copy(v.begin(),v.end(),output);

    //determines first and last elements of the vector 
    cout << "\nFirst element of v: " << v.front()
        << "\nLast element of v: " << v.back();

    v[0]=7;
    v.at(2)=10;

    v.insert(v.begin()+1,22);

    cout << "\nContents of v after changes : ";
    copy( v.begin(),v.end(),output );

    v.erase(v.begin(),v.end());
    cout << "\nAfter erase v "
        << (v.empty()? "is" : "is not") << " empty";

    v.insert(v.begin(),a,a+SIZE);
    cout << "\nContents of v before clear: ";
    copy( v.begin(),v.end(),output );

    v.clear();
    copy( v.begin(),v.end(),output );
	return 0;
}
