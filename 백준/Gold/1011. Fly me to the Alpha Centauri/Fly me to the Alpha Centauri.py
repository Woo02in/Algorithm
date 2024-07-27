def main() :
	count = int(input())
	for i in range(0,count) :
		x , y = map(int , input().split())
		if x >= 0 and x < y and y < (2<<31) :
			diff=y-x 
			n = 1
			while(n*n+n< diff) :
				n=n+1 
			if n*n>=diff :
				print(2*n-1)
			elif n*n<diff :
				print(2*n)


		else :
			return -1




if __name__=="__main__" :
	main()