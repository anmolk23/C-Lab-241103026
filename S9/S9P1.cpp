#include <iostream>
#include <vector>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter elements:"<<'\n';
    cin>>n;
    vector <int> array(n);
    
    for (int i=0; i<n; i++)
    {
        cin>> array [i];
    }

    int X, P;
    cout<< "Enter value to insert:"<<'\n';
    cin >> X;
    cout<< "Position:"<< '\n';
    cin>> P;
    
    array.insert(array.begin()+ P,X);
    for(int print: array)
    cout<<print<<" ";
}