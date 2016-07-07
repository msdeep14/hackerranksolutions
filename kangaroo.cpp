#include<iostream>
#include<cmath>
#define ll long long int
using namespace std;
int main(){
	double x1,x2,v1,v2,d;
	cin>>x1>>v1>>x2>>v2;
	if((x2==x1)) cout<<"YES";
	else if((x2>x1&&v2>=v1) || (x1>x2 && v1>=v2) ) cout<<"NO";
	else{
		if(x2>=x1){
			//d=(v1*(x1-x2))/(v2-v1);
			d=(2*x2-2*x1+v1-v2)/(v1-v2);
			if(d>=0 && floor(d)==d) cout<<"YES";
			else cout<<"NO";
		}
		else{
			//d=(v2*(x2-x1))/(v1-v2);
			d=(2*x1-2*x2+v2-v1)/(v2-v1);
			if(d>=0 && floor(d)==d) cout<<"YES";
			else cout<<"NO";
		}
	}
	return 0;
}
