#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
	int m,n;
	cout<<"m个vector<int> "<<"m=";
	cin>>m;
	cout<<"一个vector有n个元素"<<"n=";
	cin>>n;//m个vector<int> 每个vector有n个元素 
 
	vector<vector<int> > ivec;
 
	for(int i=0;i<m;++i)
	{
		vector<int> vec;
		cout<<"Input "<<n<<" numbers at "<<i+1<<" times"; 
		for(int j=0;j<n;++j)
		{
			// int x;//每一个元素
			// cin>>x;
			vec.push_back(j);
		}
		ivec.push_back(vec);
	}
 
	for(int i=0;i<m;++i)
	{
		cout<<"The "<<i+1<<"th output is:"; 
		for(int j=0;j<n;++j)
			cout<<ivec[i][j]<<" ";
		
		cout<<endl;
	}
} 


