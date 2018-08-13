#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

typedef unsigned long Item;

class stack
{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};

#endif // STACK_H_INCLUDED
