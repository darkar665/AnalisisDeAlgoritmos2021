CUT-ROD(p,n)
if n==0
	return 0
q= -oo
for i=1 to n
	q=max(q,p[i]+CUT-ROD(p,n-i))
return q