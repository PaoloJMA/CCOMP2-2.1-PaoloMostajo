#ifndef __DYNAMICINTARRAY_H__
#define __DYNAMICINTARRAY_H__

#include <iostream>

template<class T>

class DynamicIntArray {
    private:
        T *data;
        T size;
    public:
        DynamicIntArray() {
            this->size = 0;
            data = new int[size];
        }
        DynamicIntArray(const T arr[], const T size) {
            this->size = size;
            data = new int[size];
            for(int i = 0; i < size; i++)
                data[i] = arr[i];
        }
        //DynamicIntArray(const DynamicIntArray &o) {

        DynamicIntArray(const T &o) {
            this->size = o.size;
            data = new int[o.size];
            for(int i = 0; i < size; i++)
                data[i] = o.data[i];
        }
        ~DynamicIntArray() {
            delete[] data;
        }

        T push_back(T val) {
            int *tmp = new int [size + 1];
            for ( int i = 0; i < size; i++) {
                tmp[i] = this->data[i];
            }
            delete[] data;
            
            this->data = tmp;
            this->size++;
            this->data[size-1] = val;
            
        }
                
        T getSize() const {
            return size;
        }
        T print() const {
            std::cout << "[ ";
            for(int i = 0; i < size; i++)
                std::cout << data[i] << " ";
            std::cout << "]" << std::endl;
        }
        /*
        T DynamicPointArray::insert(T val, T position) {
            Point *tmp = new Point[size + 1];

            for (int i = 0, j = 0; i < size; i++, j++){
                if (j == position) {
                    tmp[position] = val;
                    i--;
                } else {
                    tmp[j] = data[i];
                }
            }

            size += 1;

            delete [] data;

            data = tmp;
        }

        T DynamicPointArray::remove(T position){
            Point *tmp = new Point[size - 1];

            for (int i = 0, j = 0; i < size; i++, j++){
                if (j == position) {
                    i++;
                    tmp[j] = data[i];
                } else {
                    tmp[j] = data[i];
                }
            }

            size -= 1;
            delete [] data;
            data = tmp;
        }
        };
        */
};
#endif
