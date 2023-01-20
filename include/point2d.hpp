#ifndef _POINT2D__
    #define __POINT2D__
    #include "point.hpp"

    class Point2D : public Point{

        

        public:
            using Point::Point();
            Point2D(int x, int y,int z);
        private:
            int z;
    }

#endif