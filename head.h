#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

struct node{

    int val;
    struct node* l;
    struct node* r;

};
typedef struct node* tree;


tree add(tree R,int val);
int existence(tree R,int val);




#endif // HEAD_H_INCLUDED
