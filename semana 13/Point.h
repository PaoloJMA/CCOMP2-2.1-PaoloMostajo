#ifndef __POINT_H__
#define __POINT_H__

using namespace std;

template <typename T>
class Point {
    private:
        T x, y;
    public:
        Point(const T u = 0, const T v = 0) : x(u), y(v) {}
        T getX() const {
            return x;
        }

        T getY() const {
            return y;
        }
};
/* 
METODOS FUERA DE LA CLASE, PERO DENTRO DEL HEADER

template <typename T>
T Point<T>::getX() const {
    return x;
}

template <typename T>
T Point<T>::getY() const {
    return y;
}
*/

#endif