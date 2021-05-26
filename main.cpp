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

//     VectoredList v;

//     for(int i=0;i<101;i++)
//     {
//         v.push_back(to_string(i));
//     }
//     for (int i = v.getSize()-1; i >= 0; i--)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<"\n~~~~~~~~"<<endl;

//     for(auto& element:v )
//     {
//         cout<<element<<' ';
//     }
//     cout<<"\n~~~~~~~~"<<endl;

//     VectoredList::Iterator it = v.begin();
//     it+=3;
//     v.erase(it);
//     v.show();
//     cout<<"~~~~~~~~"<<endl;
//     {
//         VectoredList v2;
//         for (int i = 0; i < 23; i++)
//         {
//             v2.push_back( to_string(24-i) );
//         }
//         v = v2;
//     }
//     v.show();
//     cout<<"end"<<endl;


 cout<<"Konstruktor przenoszacy"<<endl;
    VectoredList v1;
    for (int i = 0; i < 10; ++i)
    {
        v1.push_back(to_string(i));
    }

    cout<<"v1"<<endl;
    for (int i = 0; i < v1.getSize(); ++i)
    {
        cout<<v1[i]<<" ";
    }
    VectoredList v2 = move(v1);
    cout<<endl;
    cout<<"v2"<<endl;
    for (int i = 0; i < v2.getSize(); ++i)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;



    cout<<"= przenoszacy"<<endl;

    cout<<"v2"<<endl;
    for (int i = 0; i < v2.getSize(); ++i)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    VectoredList v3 =  move(v2);
    cout<<"v3"<<endl;
    for (int i = 0; i < v3.getSize(); ++i)
    {
        cout<<v3[i]<<" ";
    }
    cout<<endl;




    cout<<"+ test (przenoszacy)"<<std::endl;
    VectoredList v5;

    for(int i=0;i<10;++i){
        v5.push_back(to_string(i));
    }
    cout<<"v5"<<endl;
    for(int i=0;i<v5.getSize();++i){
        std::cout<<v5[i]<<" ";
    }
    cout<<endl;
    VectoredList v6 =  move(v5);

   cout<<"v6"<<endl;
    for(int i=0; i< v6.getSize(); ++i){
        cout<<v6[i]<<" ";
    }


    return 0;
}

