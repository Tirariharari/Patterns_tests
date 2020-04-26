#include <iostream>

class Component{
    void Operation ();
    void Add (Component);
    void Remove (Component);
    Component* GetChild (int);
};

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
