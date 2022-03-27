#include <iostream>
using namespace std;
class Mathematics{
    private:
    float res;
    public:
void parallelogramVol(int a, int b,int h) {
    res=a*b*h;
    cout<<"the volume of parallelogram = "<<res<<endl;}
void coneVol(int r, int h){
    res=3.14*(r*r)*h/3;
    cout<<"the volume of cone = "<<res<<endl;}
void pentagonalPrismVol(int c,int a, int n ,int h){
    res=c*a*n*h/2;
    cout<<"the volume of pentagonal prism = "<<res<<endl;}
void multi(int a, int b) {
    res=a*b;
	cout<<"a*b= "<<res<<endl;}
void divide(float a, float b) {
    res=a/b;
	cout<<"a/b= "<<float(res)<<endl;
    res=b/a;
	cout<<"b/a= "<<float(res)<<endl;}	
void add(int a, int b) {
    res=a+b;
	cout<<"a+b= "<<res<<endl;}	
void sub(int a, int b) {
        res=a-b;
        cout<<"a-b= "<<res<<endl;
	    res=b-a;
        cout<<"b-a= "<<res<<endl;}
void pythagoras(int a, int b){
    res=a*a+b*b;
    cout<<"c square = "<<res;}
 void  menu() {
	 cout << "1- Calculate the volume of parallelogram"<<endl;
	 cout << "2- Calculate the volume of cone  " <<endl;
	 cout << "3- Calculate the volume of pentagonal prism"<<endl;
	 cout << "4- Perform all arithmetic operations on numbers" << endl;
	 cout << "5- Calculate the third side of the triangle" << endl;}
};

int main() {
    int ch,a,b,c,d;
    Mathematics m;
    do{
        m.menu();
        cout<<"choose the number from menu: ";
        cin>>ch;
        if(ch==1){
            cout<<"enter the side 1,2,3: ";
            cin>>a>>b>>c;
           m.parallelogramVol(a,b,c);}
        else if (ch==2){
            cout<<"enter the Radius of the circle & the high: ";
            cin>>a>>b;
            m.coneVol(a,b);}
        else if(ch==3){
            cout<<"enter the fourth sides: ";
            cin>>a>>b>>c>>d;
            m.pentagonalPrismVol(a,b,c,d);}
        else if (ch==4){
             cout << "Enter the first & second number: ";
             cin >> a>>b; 
             m.multi(a,b);    
             m.divide(a,b);
             m.add(a,b);
             m.sub(a,b);}
        else if(ch==5){
            cout<<"enter the triangle angle: ";
            cin>>d;
            if(d==90){
            cout<<"enter the two side in triangle: ";
            cin>>a>>b;
            m.pythagoras(a,b);}           
            else{cout<<"not found"<<endl;}}
    }while(ch<=5);}
