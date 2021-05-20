#include <iostream>
#include <string>
#define N 10
class VectoredList
{
public:
    VectoredList() :head(nullptr), tail(nullptr), bucketCount(1)
    {

    }
    class Bucket
    {
    public:

        Bucket *prev = nullptr;
        Bucket *next = nullptr;
        std :: string *data;
        int elementsNumber;

        Bucket() : prev(nullptr), next(nullptr), elementsNumber(0) {
            next = nullptr;
            prev = nullptr;
            auto *str = new std :: string;

        }

        ~Bucket(){
            delete[] data;
            delete prev;
            delete next;
        }


    };
    void add_Bucket()
    {
        Bucket *temp = new Bucket;
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        ++bucketCount;
    }

    std ::string & operator[](int index) const
    {
        Bucket *temp=head;
        int ref_el=index%N;
        index-=ref_el;
        index/=N;
        while(index)
        {
            temp=temp->next;
            --index;
        }
        return temp->data[ref_el];
    }
    Bucket *head = nullptr;
    Bucket *tail = nullptr;
    int bucketCount;
    int size_;
    int capacity_;

    void push_back(std :: string d)
    {
        if(tail->elementsNumber<N)
        {
            tail->data[head->elementsNumber]=d;
            ++(tail->elementsNumber);
        }
        else
        {
            add_Bucket();
            tail->data[tail->elementsNumber]=d;
            ++(tail->elementsNumber);
        }
    }
    ~VectoredList() {
        delete head;
        delete tail;
    }

};

