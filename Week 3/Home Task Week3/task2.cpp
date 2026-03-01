#include<iostream>
using namespace std;
main(){
int length , fps , answers;
cout<<"Enter the total length of video";
cin>>length;
cout<<"Enter frames per second";
cin>>fps;
answers=length*fps*60;
cout<<"Total number of Frames in a video is :"<<answers;
}