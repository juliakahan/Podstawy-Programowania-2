#include <iostream>

//Do zadania z poprzednich zajęć (VectoredList) proszę dodać następujące rzeczy:
//Konstruktor przenoszący + testy [1p]
//Przenoszący operator= + testy [1p]
//VectoredList operator+(const VectoredList& rhs) const; // ktory polaczy obydwa kontenery w jeden + testy [1p]
//Przenoszącą metodę assign, która z kontenera np. std::vector przeniesie wszystkie elementy + testy [1p]

#include <iostream>
#include <string>

#include "Vectored_List.h"

using namespace std;

int main()
{
    //cout<<"hello"<<endl;

    VectoredList v;

    for(int i=0;i<101;i++)
    {
        v.push_back(to_string(i));
    }
    for (int i = v.getSize()-1; i >= 0; i--)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n~~~~~~~~"<<endl;

    for(auto& element:v )
    {
        cout<<element<<' ';
    }
    cout<<"\n~~~~~~~~"<<endl;

    VectoredList::Iterator it = v.begin();
    it+=3;
    v.erase(it);
    v.show();
    cout<<"~~~~~~~~"<<endl;
    {
        VectoredList v2;
        for (int i = 0; i < 23; i++)
        {
            v2.push_back( to_string(24-i) );
        }
        v = v2;
    }
    v.show();
    cout<<"end"<<endl;




    return 0;
}

