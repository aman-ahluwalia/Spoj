def main():
	t = 1024
	while t>0:
		n = raw_input();
		if n==0:
			print 0
		elif n==1:
			print 1
		else:
			N = str(int(n)/2)
			M = int(n)%2
			n = str(int((int(n)+1)*int(N) - pow(int(N),2)) + M)
			print n
		t = t-1
if __name__ == '__main__':
  main() 