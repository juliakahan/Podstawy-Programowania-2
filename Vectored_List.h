//
// Created by Julia Kahan on 25/05/2021.
//

#ifndef PP12_VECTORED_LIST_H
#define PP12_VECTORED_LIST_H

#include <string>

constexpr size_t NodeSize = 10;

class VectoredList
{
private:

    struct Bucket
    {
        int lastIndex;
        Bucket *next;
        Bucket *pre;
        std::string tab[NodeSize];

        Bucket();
        ~Bucket();

        bool add(std::string &value);
        //Debug
        void show();
    };

    Bucket *head;
    Bucket *tail;

    size_t size;
    size_t capasity;

    void pop_back();

public:

    class Iterator
    {
        friend class VectoredList;
    private:
        Bucket *Bcursor;
        std::string *Ecursor;

    public:
        Iterator();
        ~Iterator();

        Iterator& operator++ ();
        std::string& operator* ();
        bool operator != (const Iterator& other);
        Iterator& operator+= (const int count);


    };

    VectoredList& operator=(VectoredList&& other);
    VectoredList operator+(const VectoredList& rhs) const;

    VectoredList();
    ~VectoredList();

    VectoredList(VectoredList &&other) noexcept;

    void push_back(std::string value);
    std::string & operator [] (const size_t index) const;

    Iterator begin() const;
    Iterator end() const;

    void erase(const Iterator &pos);
    void erase(const Iterator &start, const Iterator &end);

    VectoredList& operator = (const VectoredList &other);
    void assign(std :: string &&v);

    int getSize() const;
    //Debug
    void show();
};
#endif //PP12_VECTORED_LIST_H
