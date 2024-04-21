#include <iostream>
#include <string>

using namespace std;


class shape
{
protected:
    string color;
public:
    shape(){}
    shape(string Color){
           color=Color;
    }
    string getColor(){
        return  color;
    }
    void setColor(string getcolor){
        color=getcolor;
    }
    void print(){
        cout<<"color : "<<color<<endl;
    }
};
//-----------------------------------------------------------------
class Circle : public shape
{
private:
    float radius;
public:
    Circle(){}
    Circle(string getcolor , float getradius ): shape( getcolor){
        radius = getradius;
    }
    float getRadius(){
        return radius;
    }
    void setRadius(float getradius){
        radius=getradius;
    }
    float perimeter(){
        return 2*3.14*radius;
    }
    float area(){
        return  3.14*radius*radius;
    }
    void print(){
       shape::print();
       cout<<"perimeter : "<<perimeter()<<endl;
        cout<<"area : "<<area();
    }
};
//-----------------------------------------------------------------
class Rectangle : public shape
{
private:
    float width;
    float height;
public:
    Rectangle(){}
    Rectangle(string color, float getwidth, float getheight):shape(color){
        width=getwidth;
        height=getheight;
    }

    float getWidth(){
        return width;
    }
    void setWidth(float getwidth){
        width=getwidth;
    }
    float getHeight(){
        return  height;
    }
    void setHeight(float getheight){
        height=getheight;
    }
    float perimeter(){
        return (2*(height+width));
    }
    float area(){
        return width*height;
    }
    void print(){
        shape::print();
        cout<<"perimeter : "<<perimeter()<<endl;
        cout<<"area : "<<area();
    }
};
//-----------------------------------------------------------------

int main() {
    string str;
    getline(cin>>ws,str);
    str.erase(str.find_last_not_of(" \n\r\t")+1);
    if (str=="Circle"){
     float r;
     string c;
     cin>>r;
        getline(cin>>ws,c);
        c.erase(c.find_last_not_of(" \n\r\t")+1);
        Circle X(c,r);
        X.print();
    }
    else if (str=="Rectangle"){
        float H,W;
        string c;
        cin>>W>>H;
        getline(cin>>ws,c);
        c.erase(c.find_last_not_of(" \n\r\t")+1);
        Rectangle X(c,W,H);
        X.print();
    }

    return 0;
}
