
#include "iostream"
#include "list"

using namespace std;

template<class T>
class ArrayList{
private:
    int length;
    T *element;
public:
    ArrayList();
    ArrayList(const int,T*);
    ArrayList(const ArrayList<T>&);
    ~ArrayList();

    bool add(const int,T);

    void add(const T);

    bool addAll(const T*,const int);

    T get(const int);

    const int indexOf(const T);

    const int lastIndexOf(const T);

    bool removeAt(const int);

    const int lengths();

    void print();
};

//******* CONSTRUCTION AND DESTROY ********//
template<class T>
ArrayList<T>::ArrayList(){
    this->length = 0;
    this->element = NULL;
}

template<class T>
ArrayList<T>::ArrayList(const int nsize,T* p){
    this->length = nsize;
    this->element = p;
}

template<class T>
ArrayList<T>::ArrayList(const ArrayList<T>& l){
    this->length = l.length;
    this->element = l.element;
}

template<class T>
ArrayList<T>::~ArrayList(){
    this->length = 0;
    delete this->element;
}

//********* METHOD **********//
template<class T>
bool ArrayList<T>::add(const int index,T val){
    if(index < 0 || index > this->length){
        cout << "Can't add value in index";
        return false;
    }
    else{
        int l = this->length;
        T *etemp = this->element;
        this->element = new T[l + 1];
        for(int i = 0; i < l; i++) this->element[i] = etemp[i];
        for(int i = l; i > index; i--)
            this->element[i] = this->element[i - 1];
        this->element[index] = val;
        this->length++;
    }
}

template<class T>
void ArrayList<T>::add(const T val){
    T *etemp = this->element;
    int l = this->length;
    this->element = new T[l + 1];
    for(int i = 0; i < l; i++) this->element[i] = etemp[i];
    this->element[l] = val;
    this->length++;
}

template<class T>
T ArrayList<T>::get(const int index){
    if(index < 0 || index >= this->length){
        cout << "Can't get element in index";
    }
    else return this->element[index];
}

template<class T>
bool ArrayList<T>::addAll(const T *arr,const int nsize){
    if(arr == NULL){
        cout << "Can't not all colection to list";
        return false;
    }
    else{
        int l1 = this->length;
        T *etemp = this->element;
        this->element = new T[l1 + nsize];
        for(int i = 0; i < l1; i++)
            this->element[i] = etemp[i];
        for(int i = l1; i < l1 + nsize; i++)
            this->element[i] = arr[i - l1];
        this->length += (nsize);
    }
}

template<class T>
const int ArrayList<T>::indexOf(const T val){
    int l = this->length;
    for(int i = 0; i < l; i++){
        if(this->element[i] == val)
            return i;
    }
    return -1;
}

template<class T>
const int ArrayList<T>::lastIndexOf(const T val){
    int l = this->length;
    int v = -1;
    for(int i = 0; i < l; i++){
        if(this->element[i] == val)
            v = i;
    }
    return v;
}

template<class T>
bool ArrayList<T>::removeAt(const int index){
    if(index < 0 || index >= this->length){
        cout << "Can't remove value in index";
        return false;
    }
    else{
        int l = this->length;
        T *etemp = this->element;
        this->element = new T[l - 1];

        for(int i = index; i < l; i++){
            etemp[i] = etemp[i + 1];
        }

        for(int i = 0; i < l - 1; i++){
            this->element[i] = etemp[i];
        }
        this->length--;
    }
}

template<class T>
const int ArrayList<T>::lengths(){
    return this->length;
}

template<class T>
void ArrayList<T>::print(){
    int l = this->length;
    cout << endl;
    for(int i = 0; i < l; i++){
        cout << "[" << i << "] => \'" << this->element[i] << "\'\n";
    }
}



int main(){

    /*ArrayList<int> a;

    int *b;
    b = new int[5];

    for(int i = 0; i < 5; i++)
        b[i] = i + 1;

    a.addAll(b,5);
    a.print();
    a.removeAt(4);
    a.print();*/



    return 0;
}
