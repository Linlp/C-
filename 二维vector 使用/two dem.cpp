#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int m,n;
	m=n=3;
	vector<vector<int> > vtwo;
	for (int i = 0; i < m; ++i)
	{
		vector<int> v1;
		for (int j = 0; j < n; ++j)
		{
			v1.push_back(j);
		}
		vtwo.push_back(v1);
		
	}

	for (int i = 0; i < m; ++i)
	{
		cout <<i<<"th output is :";
	for (int j = 0; j < m; ++j)
	{
		cout <<" "<< vtwo[i][j];

	}
	cout << endl;
	}
	return 0;
}
