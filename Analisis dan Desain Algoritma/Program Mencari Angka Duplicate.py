# program mencari angka duplicate di array

def printRepeating(X, panjang):

    print("\nArray X : " + str(X))
    print("Angka Duplikat : ", end="")

    count = [0] * panjang
    for i in range(0, panjang):
        if(count[X[i]] == 1):
            print(X[i], end=" ")
        else:
            count[X[i]] = count[X[i]] + 1


X = [8, 6, 4, 2, 6, 5, 3, 1, 8, 3]
panjang_X = len(X)
printRepeating(X, panjang_X)
