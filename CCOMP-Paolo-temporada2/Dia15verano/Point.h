#ifndef __POINT_H__
#define __POINT_H__

class Point {
    private:
        int x, y;
    public:
        Point(int, int);
        Point();
        void SetX(int x);
        void SetY(int);
        int GetX() const;
        int GetY() const;
        void print() const;
};

#endif
