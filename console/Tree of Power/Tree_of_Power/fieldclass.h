#ifndef FIELDCLASS_H
#define FIELDCLASS_H

class Field
{
private:
    Node* root;
    void checkNodes() { }
    void addNode() { }
    void remNode() { }
public:
    Field()
    {
        root = new Node();
    }
    void run() { }

};

#endif // FIELDCLASS_H
