#include <iostream>

using namespace std;

class Cuboid{
private:
    int length, height, width;
public:
    Cuboid(){
        length = 0;
        height = 0;
        width = 0;
    }
    Cuboid(int l, int h, int w){
        legth = l;
        height = h;
        width = w;
    }
    int getVolume(int l,int h,int w){
        return l*w*h;
    }
    int getSurfaceArea(int l,int h,int w){
        return 2*l*w+2*l*h+2*h*w;
    }
};

int main()
{
    Cuboid c[5];
    c[0](3,4,5);
    c[1](2,4,6);
    c[2](6,5,3);
    c[3](9,8,7);
    c[4](10,11,12);
    
    cout<<c[0].getVolume(3,4,5);
    cout<<c[1].getVolume(2,4,6);
    cout<<c[2].getVolume(6,5,3);
    cout<<c[3].getVolume(9,8,7);
    cout<<c[4].getVolume(10,11,12);

    return 0;
}
