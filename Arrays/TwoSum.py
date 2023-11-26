def minimumMoves(a, m):
    
        total_moves = 0  # this will keep track of number of moves
        # iterating over each value of andrea's array
        for i in range(len(a)):
            andrea = str(a[i])  # converting the integer values to string
            maria = str(m[i])  # converting the integer values to string

            # for each element of the string which is a digit
            for j in range(len(andrea)):
                num_andrea = int(andrea[j])  # calculating the digit
                num_maria = int(maria[j])
                total_moves += abs(
                    num_andrea - num_maria
                )  # difference of digits will give the number of moves requied to convert one into another

            return total_moves


# reading values for input
n = int(input())  # number of values in array
andrea_array = []
for _ in range(n):
    andrea_array.append(int(input()))  # appending vlaues entered in array

n = int(input())
maria_array = []
for _ in range(n):
    maria_array.append(int(input()))

minimumMoves(andrea_array, maria_array)
