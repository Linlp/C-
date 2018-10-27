#include<iostream>
using namespace std;
class base{
public:
	virtual void disp(){
		cout << " base! " <<endl;
	}
};

class child:public base
{
public:
	void disp(){
		cout << " child! " <<endl;
	}
	 
	
};


int main(int argc, char **argv)
{
	// cout << argc << endl;
	// for(int i=0; i<argc;i++)
	// cout << "Argument:"<< i << "is"  << argv[i]<< endl;
    // cout << name <<endl;
    base obj_base;
    child obj_child;
	 string name = argv[1];//name == obj、pt、cite、Intra
	 
	 if(name == "obj")//对象名访问 oject
	 {
		 obj_base.disp();//对象名调用虚函数
		 obj_child.disp();

		 obj_child.base::disp();//通过类名+::作用域限定符指定调用 base 函数
		 obj_child.child::disp();
		 cout << " 对象名调用" <<endl;  
     }
     //point
     base *pbase = &obj_base;
     pbase->disp();

     child *pchild = &obj_child;
     pchild->disp();//使用基类指针调用虚函数
     pchild->base::disp();
	 pchild->child::disp();
	 pbase = pchild;
	 pbase->disp();


}