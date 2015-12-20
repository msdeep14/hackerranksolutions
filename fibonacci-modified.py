a,b,n=map(int,raw_input().split())
tn=a
tn1=b
for i in xrange(0,n-2):
	tn2=tn1*tn1 + tn
	tn=tn1
	tn1=tn2
c=tn2
print(c)
