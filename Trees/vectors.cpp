#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Dynamically
    // vector<int> *vp = new vector<int>();
    vector<int> v;

    for (int i = 0; i < 100; i++)
    {
        cout << "capacity: " << v.capacity() << endl;
        cout << "size: " << v.size() << endl;
        v.push_back(i + 1);
    }
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    //  don't use [] for inserting elements
    v[3] = 1002;
    v[4] = 1234;

    v.push_back(23);
    v.push_back(235);

    // deletes last element
    v.pop_back();

    /*
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    cout<< v[0] <<endl;

    cout << "SIZE: " << v.size() <<  endl;

    cout << v.at(2) << endl;
*/
}