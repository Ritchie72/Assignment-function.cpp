 #include<iostream>
using namespace std;
double area(int r){
    double area = 3.14*r*r;
    return area;
}
double circumference(int r){
    double circumference = 2*3.14*r;
    return circumference;
}
int main()
{
    cout<<area(3)<<endl;
    cout<<circumference(3);
    return 0;
}
