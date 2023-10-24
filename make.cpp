#include <iostream>
using namespace std;
struct jm{
	char x;
	string dm;
}s[100000];
int cnt;
int main(){
	cout<<"ÇëÊäÈëÓĞ¶àÉÙÃØÔ¿:";
	cin>>cnt;
	for(int i=1;i<=cnt;i++){
		cout<<"ÇëÊäÈëÔ­À´×Ö·û:";
		cin>>s[i].x;
		cout<<"ÇëÊäÈë¼ÓÃÜ×Ö·û´®:";
		cin>>s[i].dm;
	}
	freopen("mrs.in","w",stdout);
	cout<<cnt<<endl;
	for(int i=1;i<=cnt;i++){
		cout<<s[i].x<<" "<<s[i].dm<<endl;
	}
	return 0;
}
