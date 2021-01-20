def MencariAngka(A):
	n = len(A)
	total = (n + 1)*(n + 2)/2
	jml_A = sum(A)
	return total - jml_A

A1 = [1, 2, 3, 4, 5, 6]
A = [1, 2, 3, 5, 6]
miss = MencariAngka(A)
print("\ntotal angka : " +str(len(A1)))
print("Array " +str(A))
print("Angka yang hilang : "+str(int(miss)))