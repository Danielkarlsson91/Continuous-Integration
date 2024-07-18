#Make a program to read a string from the input and print the index of uppercase letters in the string to the output.

def capital_index(Word):
    idx = []
    for index, letter in enumerate(Word):
        if letter.isupper():
            idx.append(index)
    return idx

if __name__ == "__main__":
    user_input = input("Enter a string: ")
    uppercase_indices = capital_index(user_input)
    print("Indices of uppercase letters:", uppercase_indices)

