#include<iostream>
using namespace std;
namespace A
{
  extern int A=1;
  class AA
  {
    public: void dispA()
      {
        cout << " This is A= "<<A <<endl;
      }
  };
}
namespace B
{
  void dispB()
  {
   int A;
   cout << "This is B" <<endl;
   cout << " This is A= "<<A <<endl;
  }
}

int main()
{
  B::dispB();
  return 0;
}
