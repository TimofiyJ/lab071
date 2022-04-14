#ifndef NODE_H
#define NODE_H


class Node
{
public:
    static int amount;
    double value;
    Node* next;
    Node(double v){
        value=v;
        amount++;
    }
    Node(){
        amount++;
    }
};

#endif // NODE_H
