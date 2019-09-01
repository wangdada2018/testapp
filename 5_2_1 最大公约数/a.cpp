#include<iostream>
using namespace std;
int gcd(int a,int b){  //求a,b的最大公约数
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
    int a,b;
	scanf("%d%d",&a,&b);
	printf("最大公约数是%d",gcd(a,b));
	return 0;
}