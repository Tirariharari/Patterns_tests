#include <iostream>
#include "classes.h"

int main()
{
    Component* component = new Concreate_component;
    Concreate_Decorator_A concr_decorator(component);
    concr_decorator.Print();
    return 0;
}
