
#include "iostream"
#include "array"

#define SIZE 100

using namespace std;

template<class T> class ArrayList{
private:
    int cur_size;
    T *element;
public:
    ArrayList<T>(){
        this->cur_size = 0;
        this->element = new T[SIZE];
    }
    friend istream& operator>>(istream&, IntArray<int>&);
    friend ostream& operator<<(ostream&, IntArray<int>);
};

istream& operator>>(istream &in,IntArray<int> &a){
    in >> a.element[a.cur_size];
    a.cur_size++;
    return in;
}

ostream& operator<<(ostream &os, IntArray<int> a){
    for(int x = 0; x < a.cur_size; x++)
        os << a.element[x] << " ";
    os << "\n";
    return os;
}

int main()
{

    IntArray<int> a;

    cin >> a;
    cin >> a;
    cin >> a;

    cout << a;

    return 0;
}
