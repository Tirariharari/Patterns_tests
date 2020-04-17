#ifndef CLASSES_H
#define CLASSES_H

class Component{
public:
    virtual void Print () = 0;
};

class Concreate_component : public Component{
    void Print () { std::cout << "Concreate_component" << std::endl; }
};

class Decorator : public Component{
public:
    Decorator (Component* c) { _component =c; }
    virtual void Print () = 0;
private:
    Component* _component;
};

class Concreate_Decorator_A : public Decorator{
public:
    Concreate_Decorator_A (Component* c):Decorator(c) {}
    void Print ()
    {
        Decorator::Print();
        std::cout << "Concreate_Decorator_A" << std::endl;
    }
};

void Component::Print()
{
    std::cout << "Component" << std::endl;
}

void Decorator::Print()
{
    _component->Print();
}

#endif // CLASSES_H
