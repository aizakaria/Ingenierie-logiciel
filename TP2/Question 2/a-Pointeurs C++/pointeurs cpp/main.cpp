#include <iostream>

using namespace std;

int main()
{

     int* p = NULL;
     p = new int;
    *p = 29;
     cout << "Value of p: " << *p << endl;
     delete p;
     if(p == 0)
     {
         cout<<"memory not allocated"<<endl;
     }else
     {
        cout<<"Memory successfully allocated"<<endl;
        delete p;
        cout<<"Memory successfully freed."<<endl;
     }

     int q = 25;
     int **ptr2=20;

    cout<<"l'adresse de q en utilisant le double pointeur : ",&ptr2<<endl;
    cout<<"la valeur de q en utilisant le double pointeur : ",ptr2<<endl;





}
