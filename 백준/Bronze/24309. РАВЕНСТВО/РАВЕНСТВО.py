def main():
    a = int(input())
    b = int(input())
    c = int(input())
    
    cnt = b - c
    cnt //= a
    
    print(cnt)

if __name__ == "__main__":
    main()
