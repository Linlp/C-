//静态成员函数的调用
// 类名：：静态函数（参数列表）computer::print(cmp1); 所有对象对一个类成员的共享
//const :const 成员函数：point：：print（）const{}
//const 使用
//指向对象的指针
#include <iostream>
using namespace std;

class point
{
	int x;
	int y;
public:
	point(int X,int Y):x(X),y(Y){}
	void setx(int X){
		x = X;
	}
	void sety(int Y){
		y = Y;
	}
	 void print() const{//const 成员函数
		cout << "x=" << x <<","<< "y=" <<y <<endl;
	}

	~point(){}
	
};
int main(int argc, char const *argv[])
{
	point p1(1,2);
	p1.print();
	p1.setx(3);
	p1.sety(4);
	p1.print();

	const point p2(5,6);//const 对象只能调用 const 成员函数
	//p2.setx(3);p2.sety(4);//const 不可以修改数据成员
	p2.print();
	cout << "sizeof(point) :" <<sizeof(point) <<endl;
	return 0;
}

