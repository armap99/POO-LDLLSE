#ifndef NODE_H
#define NODE_H

#include "cancion.h"
class Node
{
private:
    Cancion data;
    Node* next;
    Node* prev;
public:
    Node();
    Node(const Cancion&);

    Cancion getData()const;
    Node *getNext() const;
    Node *getPrev() const;

    void setData(const Cancion&);
    void setNext(Node*);
    void setPrev(Node*);
};

#endif // NODE_H
