def main() :
	A,B = map(int,input().split())
	if A>0 and B>0 and A<10 and B<10 :
		print(A-B)
	else :
		return -1
if __name__=="__main__" :
	main()
