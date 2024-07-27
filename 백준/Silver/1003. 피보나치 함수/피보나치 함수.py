A = int(input())
for B in range(1, A+1) :
	temp = int(input())
	if temp == 0 :
		print("1 0")
	elif temp == 1 :
		print("0 1")
	else :
		first = 0 
		second = 1
		third = 0
		for C in range(0, temp) :
			first = second
			second = third
			third = first + second 
		print(str(second)+" "+str(third))
