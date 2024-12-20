#include<iostream>
using namespace std;

class Complex {
    int real;
    int img;

    public:
    Complex (int i, int r){
        real = i;
        img = r;
    }

    void showNum(){
        cout << real << " + " << img << "i\n";
    }
};

int main(){
    Complex c1(2, 3);
    Complex c2(3, 4);

    c1.showNum();
    c2.showNum();
}