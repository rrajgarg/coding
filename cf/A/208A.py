import re;
A=input();
r=re.compile("WUB")
A=r.sub(" ",A);
A=A.split()
for word in A:
	print(word,end=" ")