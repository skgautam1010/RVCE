from random import randint
random_n = randint(1,100)
user_n = 102
try_n = 1
while random_n!=user_n and try_n <= 5 :
        print(try_n)
        user_n = int(input('guess the number'))
        if user_n < random_n :
            print('number too small')
        elif user_n > random_n :
            print('number too large')
        else :
            print("you guessed it right..congrats!!")
        try_n = try_n+1




