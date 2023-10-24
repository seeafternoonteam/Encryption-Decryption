#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
struct mrs{
	char x;
	string dm;
}s[100000];
string str,c;
int cnt;
void td(string n){
	for(int i=1;i<=cnt;i++){
		if(n==s[i].dm){
			cout<<s[i].x;
			return;
		}
	}
	cout<<n;
	return;
}
int main(){
	freopen("mrs.in","r",stdin);
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		cin>>s[i].x>>s[i].dm;
	}
	freopen("CON","r",stdin);
	cout<<"请输入需要解密的语句:";
	getline(cin,str);
	cout<<"解密的内容:";
	for(int i=0;i<str.length();i++){
		if(str[i]!=' '){
			c+=str[i];
		}
		if(i==str.length()-1){
			td(c);
		}
		else{
			td(c);
			c="";
		}
	}
	cout<<endl;
	system("pause");
	return 0;
}
