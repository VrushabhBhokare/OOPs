#include<iostream>
using namespace std;
	class Point{
		int x_c;
		int y_c; 
		public:
			Point (int x=0,int y=0):x_c(x),y_c(y)
		 	{
		 		
			 };
			 
			Point operator-(const Point &obj)
			{
				return Point(x_c-obj.x_c,y_c-obj.y_c);
			}
			
			void show()
			{
				cout<<"New x="<<x_c<<endl;
				cout<<"New y="<<y_c<<endl;

			}
	};
	int main()
	{
	Point  p1(10,6),p2(4,3);
	Point p3=p1-p2;
	p3.show();
	return 0;
		}
