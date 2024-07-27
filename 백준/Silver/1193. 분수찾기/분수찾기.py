def main() :
	X=int(input())
	if X>=1 and X<=10000000 :
		n_1=1
		i = 1
		while(n_1<X) :
			i+=1
			n_1+=i# 1 3 6 10 15 21 28 
		if  i%2==1:
			print(str(n_1-X+1)+"/"+str(i-n_1+X))
		else:
			print(str(i-n_1+X)+"/"+str(n_1-X+1))
	else :
		return -1

if __name__=="__main__" :
	main()