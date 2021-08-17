
last_num = int(input("How many numbers would you like to generate? --> "))

first_num, second_num = 0, 1

for n in range(last_num):
    print(first_num)
    first_num, second_num = second_num, first_num + second_num
