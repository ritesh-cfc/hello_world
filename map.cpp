#include<bits/stdc++.h>

using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)

int main(){
	pair<int,int> p;
	map<int,int> m;
	int n=0;
	cout<<"enter the n!!!"<<endl;
	cin>>n;
	rep(i,n){
		p.first=i+1;
		p.second=p.first*10;
		m.insert(p);
	}
	
	map<int,int>::iterator itr;
	for(itr=m.begin();itr!=m.end();itr++)
	cout<<(*itr).first<<"\t"<<(*itr).second<<"\n";
	return 0;
}
