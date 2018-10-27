// const常引用  &引用成员 类对象成员 static
//const常引用:只能用初始化列表赋值，不可以直接赋值
#include<iostream>
using namespace std;



class point{
private:
	int x;
	int y;
public:
	point(int X,int Y):x(X),y(Y){
		cout << "construtor" << endl;
	}

	point(const point & pt):x(pt.x),y(pt.y){
		cout << "copy construtor" << endl;
	}
	void print(){
		cout << "(" << x << "," << y << ")";
	}

};
class line{
private:
	point p1,p2;
public:
	line(int x1,int y1,int x2,int y2):p1(x1,y1),p2(x2,y2){
		cout << "line construtor" << endl;
	}
	line (const line &L1):p1(L1.p1),p2(L1.p2){
		cout << "line copy construtor" << endl;
	}
	void print(){
		p1.print();
		cout << " to ";
		p2.print();
	}
	//错误使用
	// void print(void){
	// 	cout << "x1="<<x1<<" y1="<<y1<<" x2="<<x2<<" y2="<<y2 <<endl;
	// }

};


int main(int argc, char const *argv[])
{
	line A(1,2,3,4);
	A.print();
	line B(A);
	B.print();
	return 0;
}