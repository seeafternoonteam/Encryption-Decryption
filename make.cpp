#include <iostream>
using namespace std;
struct jm{
	char x;
	string dm;
}s[100000];
int cnt;
int main(){
	cout<<"�������ж�����Կ:";
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		cout<<"������ԭ���ַ�:";
		cin>>s[i].x;
		cout<<"����������ַ���:";
		cin>>s[i].dm;
	}
	freopen("mrs.in","w",stdout);
	cout<<cnt<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<s[i].x<<" "<<s[i].dm<<endl;
	}
	return 0;
}
