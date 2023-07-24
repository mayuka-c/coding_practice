# Find the number of vowels in the input string. And also print the vowels present

def number_of_vowels(str):
    char_length = 0
    for char in str:
        if char in ['a', 'e', 'i', 'o', 'u']:
            print(char)
            char_length += 1
    print('Number of vowels in string: ', char_length)

number_of_vowels("avdehdshfhsaou")