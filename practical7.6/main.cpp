#include "BaseDerived.h"

int main() {
    Base* ptr = new Derived();
    cout << "\nDeleting object...\n";
    delete ptr;

    return 0;
}
