#include "node.h"

Node::Node():next(nullptr),prev(nullptr){}

Node::Node(const Cancion &e):data(e), next(nullptr), prev(nullptr){}

Cancion Node::getData() const
{
    return data;
}

Node* Node::getNext() const
{
    return next;
}

Node *Node::getPrev() const
{
    return prev;
}

void Node::setData(const Cancion &e)
{
    data = e;
}

void Node::setNext(Node *p)
{
    next = p;
}

void Node::setPrev(Node *p)
{
    prev = p;
}
