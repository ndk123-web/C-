#include <iostream>

using namespace std;

class LinkedList{
    public: 
        int val;
        LinkedList *next; // it will hold the address of LinkedList type Object
};

int main(){

    LinkedList l1 , l2 , l3;

    l1.val = 10;
    l2.val = 20;
    l3.val = 30;

    l1.next = &l2;
    l2.next = &l3;
    l3.next = nullptr;

    LinkedList *st = &l1;

    // (st->num) and *(st).num are equivalent

    // Method 1
    while (st != nullptr){
        cout << (*st).val << endl;
        st = (*st).next;
    }

    cout << endl;

    // Method 2
    st = &l1;
    while (st != nullptr){
        cout << (*st).val << endl;
        st = (*st).next;
    }

    return 0;
}