 #include<bits/stdc++.h>
 using namespace std;

 int main() {
     int a=5;
     int* b = &a;
     //& = address of operator
     //* dereference operator

    //  result will be an address, because 
     cout << "This is an address" <<  b << endl;

     
     cout << "this result is value" << *b<< endl;
    //  in the c pointer  dereference the b by &b(share the address to pointer)
     int** c = &b;

    // *c pointer print only address when we do pointer to pointer
     cout << "address of c "<< *c<< endl;
    // *b pointer dereference the **c pointer through share the address. So the result come out a value cause **c pointer got a value from *b
     cout << "This is value of a " << **c;


     return 0;



 };
