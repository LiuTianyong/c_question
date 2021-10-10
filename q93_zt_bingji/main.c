#include <stdio.h>
#include "stdlib.h"

typedef int Element;

typedef struct LNode {
    Element data;
    struct LNode *next;
} LNode, *LinkList;


void fun(LinkList A,LinkList B,LinkList C){

    LinkList a = A->next;
    LinkList b = B->next;
    LinkList c = C->next;

    while ((a!=NULL) && (b!=NULL)){

        if(a->data == b->data){
            LinkList s = (LinkList)malloc(sizeof (LNode));
            s->data = a->data;
            s->next = c->next;
            c->next = s;

            a = a->next;
            b = b->next;
        } else{
            LinkList s = (LinkList)malloc(sizeof (LNode));
            s->data = a->data;
            s->next = c->next;
            c->next = s;

            s->data = b->data;
            s->next = c->next;
            c->next = s;

            a = a->next;
            b = b->next;
        }
    }

    if(a){
        while (a){
            LinkList s = (LinkList)malloc(sizeof (LNode));
            s->data = a->data;
            s->next = c->next;
            c->next = s;

            a= a->next;
        }
    }

    if(b){
        while (b){
            LinkList s = (LinkList)malloc(sizeof (LNode));
            s->data = b->data;
            s->next = c->next;
            c->next = s;
            b= b->next;
        }
    }
}
int main() {



    return 0;
}
