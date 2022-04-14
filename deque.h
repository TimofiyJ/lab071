#ifndef DEQUE_H
#define DEQUE_H
#include "node.h"
#include <QLineEdit>
#include <QDebug>


class Deque
{
public:
    int m_id;
    Node *head=nullptr;
    Node *tail=nullptr;
    Deque(){
    }
    Deque(const Deque& father){
    }
    ~Deque(){
    }

    bool IsEmpty(){
        if(!head){
            return 0;
        }
        else{
            return 1;
        }
    }

    friend void operator+ (double i, Deque &p){
        Node *Obj=new Node(i);
        if (!p.head){
            p.head=Obj;
            (p.head)->next=nullptr;
            Obj->next=p.tail;
            p.tail=Obj;
        }else{
            Obj->next=p.head;
            p.head=Obj;
        }
    }
    friend void operator+ (Deque &p, double i){
        Node *Obj1=new Node(i);
        if (!p.head){
            p.head=Obj1;
            Obj1->next=p.tail;
            p.tail=Obj1;
        }else{
            if(!p.tail){
                p.tail=Obj1;
                Obj1->next=p.tail;
            }else{
            (p.tail)->next=Obj1; //1
            p.tail=Obj1;
            p.tail->next=nullptr;
            }

        }
    }
    friend void operator- (Deque &p,double i){
        if (i==1){
            if (p.head){
                Node* temp=p.head;              
                if(temp->next){
                    p.head=nullptr;
                    p.head=temp->next;
                    if((temp->next)->next){
                        p.head->next=(temp->next)->next;
                    }else{
                        (p.head)->next=nullptr;
                    }
                    return;
                }
                else{
                    p.head=nullptr;
                    p.tail=nullptr;
                    return;
                }
            }else{
                return;
            }
        }else{
            if(p.tail){
                qDebug()<<13;
                (p.tail)->value=0;
                (p.tail)->next=nullptr;
                (p.tail)=nullptr;
            }
        }
    }
    void operator* (double i){
        Node* temp=head;
        while(temp){
            temp->value=(temp->value)*i;
            temp=temp->next;
        }
    }

    friend void operator<<(QLineEdit* out, const Deque &D1){
        Node* temp=D1.head;
        QString Result;
        while(temp){
            Result=Result + QString(' ') +QString::number(temp->value);
            temp=temp->next;
        }
        out->setText(Result);
    }


    void operator= (class Deque& Second){
       Second.m_id=m_id;
       Second.head=head;
       Second.tail=tail;

    }


};

#endif // DEQUE_H
