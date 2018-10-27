// A::disp()
//using A::disp()
#include<iostream>
using namespace std;
namespace B
{
	namespace A{
	  void dispB()
	  {
	   int A=1;
	   cout << "This is B" <<endl;
	   cout << " This is A= "<<A <<endl;
	  }
    }
}
int main(int argc, char const *argv[])
{
	B::A::dispB();
	return 0;
}
