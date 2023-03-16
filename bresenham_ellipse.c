void bresenham_ellipse(int xc, int yc, int radius)
{
    void ellipsePoints(int, int, int, int);

    int F1 = 1 - radius, x = 0, y = radius;
    int F2 = 1 - radius, x = 0, y = radius;

    ellipsePoint(xc, yc, x, y);

    while(y>x) {
        if(F1 < 0) {
            F += x * 2 + 3;
        }
        else {
            F1 += (x-y) * 2 + 5;
            y--;
        }
        x++;
        ellipsePoint(xc, yc, x, y);
    }

    while(y>x) {
        if(F1 < 0) {
            F += x * 2 + 3;
        }
        else {
            F1 += (x-y) * 2 + 5;
            y--;
        }
        x++;
        ellipsePoint(xc, yc, x, y);
    }

}



    setPixel(xc+x, yc+y);
    setPixel(xc-x, yc+y);
    setPixel(xc+x, yc-y);
    setPixel(xc-x, yc-y);
    setPixel(xc+y, yc+x);
    setPixel(xc-y, yc+x);
    setPixel(xc+y, yc-x);
    setPixel(xc-y, yc-x);