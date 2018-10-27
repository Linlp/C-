#include<iostream>
using namespace std;

//坐标点的设置；设计到构造函数有参和无参初始化；构造函数的重载；
class point{
private:
	int x;
	int y;
	int z;
public:
	point(int X,int Y){//有参函数
		x=X;
		y=Y;
		z=0;
		cout<<" called para-functoin"<<endl;

	}
	
	point(){//无参函数 + 重载
		x=0;
		y=0;
		z=0;
		cout<<" called non-para-functoin"<<endl;
	}

	point(int X,int Y,int Z):x(X),y(Y),z(Z){//成员列表初始化
		cout<<" called liebiao inilation"<<endl;};

	~point(){//析构函数，后调用先清除
		cout<<"clear! "<<endl;
		cout << "x:" << x << " y:" << y << " z:" << z << endl;
	}
	void print(void){
		cout << "x:" << x << " y:" << y << " z:" << z << endl;
	}
	void print1(int xx){
		cout << xx << endl;
	}
	//复制构造函数：用对象初始化另外一个对象； point(const point& name ) ：point C（1，2）；B（C）；
	//l类似于调用int x=1;int y=x;
	point(const point& pt){
		x = pt.x;//
		y = pt.y;
		z = pt.z;
		cout<< " called copy constructor! "<<endl;};
};


//一般类定义
class student{
private:
	char name[10];
	char sex[10];
	long int number;
public:
	void setname(char* sz){//类内定义成员函数;默认是内联函数
		strcpy(name,sz);}

	void setnumber(long int x ){
			number = x;
	}	
	student();
	void print(void){
		cout << "name:" << name << endl;
		cout << "number:" << number<<endl;
	}
};
//类外定义成员函数
student::student(){ //无参构造函数，函数名跟类名相同
	strcpy(sex,"boy");
}
int main()
{
	cout << "一般类函数，成员函数调用方式+类内定义成员函数 == 隐式内联函数；" <<endl;
	student A;
	A.setname("Linlp");
	A.setnumber(2017206003);
	A.print();
	cout << "一般类函数，成员函数调用方式+类内定义成员函数 == 隐式内联函数；" <<endl;

	cout << "构造函数的初始化，有参无参成员列表初始化，复制拷贝函数定义和使用" <<endl;
	point B(1,2);//调用有参数
	B.print();

	point C;//调用无参函数
	C.print();
	point C1(C);
	C1.print();//调用复制构造函数

	point D(1,2,3);//初始化列表
	D.print();
	point D1(D);//调用复制构造函数
	D1.print();
	cout << "point pt1=pt2 ==" << " point pt1(pt2)" << endl;
	//B(1,2);
	cout << "构造函数的初始化，有参无参成员列表初始化，复制拷贝函数定义和使用" <<endl;
	
	//point::print1(1);
	return 0;
}    

