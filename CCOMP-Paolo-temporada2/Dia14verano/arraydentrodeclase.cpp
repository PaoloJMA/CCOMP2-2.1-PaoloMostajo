#include <iostream>

using namespace std;

class IntegerArray {
public:
    IntegerArray(int size) {
        data = new int[size];
        this->size = size;
    }
    ~IntegerArray() {
        delete[] data;
    }
    void setData(int index, int val){
        if(index>this->size){
            cout << "INDEX OUT OF SCOPE" << endl;
        }
        else {
            data[index] = val;
        }
    }
    int getData(int index) {
        return data[index];
    }
private:
    int *data;
    int size;
};
int main() {
    IntegerArray arr(2);
    IntegerArray arr2(1);
    arr.setData(0,3);
    arr.setData(15,2);
}