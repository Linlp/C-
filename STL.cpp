#include<iostream>
#include<vector>
using namespace std;

void disp(vector<int>&x ){
for (int i = 0; i < x.size(); ++i)
	{
		cout << "x["<< i << "]=" << x[i] << endl;
	}
}

int main(){

	//vector<char> v1(5,1);//5是5个元素，1是容器为5个1
	
	vector<int> v1(5,1);


	// for (int i = 0; i < v1.size(); ++i)
	// {
	// 	cout << "x["<< i << "]=" << v1[i] << endl;
	// }
	disp(v1);

//   vector<int> v;
//   int i;
//   cout  << "vector size =" << v.size() << endl;
//   for (int i = 0; i < 5; i++)
//   {
//   	v.push_back(i);
//   	cout << "i=" << i << endl;
//   }
//   cout  << "extended vector size = " << v.size() << endl;
// for (int i = 0; i < 5; i++)
//   { 
//   	cout << "i[" << i << "]=" << v[i] << endl;
//   }
  int sz[5] ={1,2,3,4,5};//赋值初始化
  vector<int> v(sz,sz+5);//一个数组初始化
  vector<int>::iterator a =v.begin();
  while( a != v.end()) 
  {
  	cout << "Value of v = " << *a << endl;	
  	a++;
  }

  return 0;
}
