#include<iostream>
using namespace std;
int gcd(int a,int b){  //��a,b�����Լ��
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
    int a,b;
	scanf("%d%d",&a,&b);
	printf("���Լ����%d",gcd(a,b));
	return 0;
}