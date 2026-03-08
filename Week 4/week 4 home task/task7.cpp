#include<iostream>
using namespace std;

int main(){

string name;
float sides;
float sides2;
float area;

cout<<"Enter Name Of the Geometrical Figure : ";
cin>> name;

if( name == "square" || name == "SQUARE" || name == "Square"){
    cout<<"Enter side : ";
    cin>> sides;
      area = sides * sides;
    cout<<"Area of Square is : "<< area;
}

else if( name == "rectangle" || name == "Rectangle" || name == "RECTANGLE"){
    cout<<"Enter side 1 : ";
    cin>> sides;
    cout<<"Enter side 2 : ";
    cin>> sides2;
    area = sides * sides2;
    cout<<"Area is : " <<area;
}

   else if( name == "circle" || name == "Circle" || name == "CIRCLE"){
    
    cout<<"Enter Radius : ";
    
cin>> sides;
    area = 3.14 * (sides * sides);
    cout<<"Area is : " <<area;
}
else if(name == "triangle" || name == "Triangle" || name == "TRIANGLE"){
    cout<<"Enter Base : ";
    cin>> sides;
    cout<<"Enter Height : ";
    cin>> sides2;
    area = 0.5 * (sides * sides2);
    cout<<"Area is : " <<area;
}

}