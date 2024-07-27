def main() :
	room_number= input() # 0611
	if int(room_number)>=0 and int(room_number)<=1000000 :
		# room_str => "0611"
		arr = list()
		for i in range(0,10) :
			if i == 9 :
				arr[6] += room_number.count(str(i))
				arr[6] = int((arr[6]+1)/2)
				continue
			arr.append(room_number.count(str(i))) 
		#print("숫자의 개수를 나타내는 리스트 : arr")
		#print(arr)
		print(max(arr))


		# if max(arr) != arr[6] and max(arr) != arr[9] :

		# 	print(int(max(arr)))

		# elif max(arr) == arr[6] and max(arr)== arr[9] :
		# 	if (arr[6] +arr[9])%2==1 :
		# 		print(int(((arr[6]+arr[9])/2) +1))
		# 	elif (arr[6] +arr[9])%2==0 :
		# 		if arr[6]>=1 or arr[9] >=1 :
		# 			print(int((arr[6]+arr[9])/2))
		# 		else : print(int(max(arr)))
		# 	else :
		# 		print(int(max(arr)))
		# elif max(arr) == arr[6] or max(arr)== arr[9] :
		# 	if (arr[6] +arr[9])%2==1 :
		# 		print(int(((arr[6]+arr[9])/2) +1))
		# 	elif (arr[6] +arr[9])%2==0 :
		# 		if arr[6]>=1 or arr[9] >=1 :
		# 			print(int((arr[6]+arr[9])/2))
		# 		else : print(int(max(arr)))
		# 	else :
		# 		print(int(max(arr)))
		
		# else :
		# 	print(int(max(arr)))
			
	else :
		return -1



if __name__== "__main__" :
	main()
