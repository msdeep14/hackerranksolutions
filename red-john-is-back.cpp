//https://www.hackerrank.com/challenges/red-john-is-back
//mandeep singh @msdeep14
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class solve
{
	int f[41];
	int numprime[41];
	int prime[400000];
	public:
	void set_data();
	void run_testcase();
	void seive();
	void count_prime();
};

void  solve :: count_prime()
{
	int count=0;
	numprime[0]=0;
	for(int i=1;i<=41;i++)
	{
		for(int j=2;j<=f[i];j++)
		{
			if(prime[j])
			{
				count++;
			}
		}
		numprime[i]=count;
		count=0;
		
	}
}

void solve :: run_testcase()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<numprime[n]<<endl;
	}
}

void solve :: seive()
{
	prime[0]=0;
	prime[1]=0;
	for(int i=2;i<=f[41];i++)
	{
		prime[i]=1;
	}
	
	int lim=sqrt(f[41]);
	for(int i=2;i<=lim;i++)
	{
		for(int j=i*i;j<=f[41];j+=i)
		{
			prime[j]=0;
		}
	}
	count_prime();
}

void solve :: set_data()
{
	int count=0;
	
	f[0]=f[1]=f[2]=f[3]=1;
	for(int i=4;i<=41;i++)
	{
		f[i]=f[i-1]+f[i-4];
	}
	
	seive();
}

int main()
{
	solve s;
	s.set_data();
	s.run_testcase();
	return 0;
}
