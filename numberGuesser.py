import random

name = input("What is your name?: ");
print("Hello,", name);

correct = random.randint(1, 100);
keepGoing = True;
tries = 0;

while (keepGoing):
    tries = tries + 1;
    guess = input("Guess a number (1-100): ");
    guess = int(guess);

    if (guess == correct):
        print("Correct!");
        keepGoing = False;
    elif (guess > correct):
        print("Too High!");
        keepGoing = True;
    else:
        print("Too Low");
        keepGoing = True;
print("you got it in", str(tries), "tries");

if (tries == 7):
    print("You are average,", name);
elif (tries > 7):
    print("You are below average,", name);
else:
    print("You are above average,", name);
