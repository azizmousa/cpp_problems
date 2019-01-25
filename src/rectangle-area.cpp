#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle{
    private:
        int width, height;
    public:
        void setWidth(int width){
            this->width = width;
        }
        void setHeight(int height){
            this->height = height;
        }

        int getWidth(){
            return this->width;
        }
        int getHeight(){
            return this->height;
        }

        void display(){
            cout << this->width<<" "<<this->height<<endl;
        }
};

class RectangleArea: public Rectangle{
    public:
        void read_input(){
            int w,h;
            cin >> w >> h;
            this->setWidth(w);
            this->setHeight(h);
        }

        void display(){
            cout << this->getWidth()*this->getHeight()<<endl;
        }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}