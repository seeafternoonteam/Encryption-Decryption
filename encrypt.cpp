#include <iostream>
#include <cstdlib>
using namespace std;
struct my{
	char x;
	string dm;
}s[100000];
int n,cnt;
string str;
void jm(char c){
	for(int i=1;i<=cnt;i++){
		if(s[i].x==c){
			cout<<s[i].dm<<" ";
			return;
		}
	}
	cout<<c<<" ";
	return;
}
void dq(){
	freopen("mrs.in","r",stdin);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
	cin>>s[i].x>>s[i].dm;
	}
	freopen("CON","r",stdin);
}
int main(){
	dq();
	cout<<"请输入需要加密的:";
	cin>>str;
	for(int i=0;i<str.length();i++){
		jm(str[i]);
	}
	cout<<endl;
	system("pause");
	return 0;
}
