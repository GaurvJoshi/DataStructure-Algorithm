#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long MaxPair(const vector<int>& num){
	int n = num.size();
	int max_index1=-1;
	for(int i = 0;i<n;++i)
	{
		if((max_index1== -1)||(num[i])>num[max_index1])
			max_index1=i;			
	}
	
	int max_index2=-1;
	for(int j=0;j<n;++j)
		if(j!=max_index1 && ((max_index2==-1)||(num[j]>num[max_index2])))
			max_index2=j;
		
	long long result = num[max_index1]*num[max_index2];
	return result;
}

int main()
{
	int n;
	cin>>n;
	vector<int> num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	
	long long result = MaxPair(num);
	cout<<result<<"\n";
	return 0;
}
