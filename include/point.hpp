#ifndef _POINT__
    #define __POINT__

    class Point{
        public:
            Point();
            Point(int x, int y);
            Point(const Point& p);
            void run() const;
 
            int getX() const;
            void setX(int x);


            ~Point();
        private:
            int x;
            int y;
    }

#endif