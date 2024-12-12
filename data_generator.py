from faker import Faker

fake = Faker()

while True:
    print("Menu:\n1. Text.\n2. Word.\n3. Words.\n4. First name\n0. Exit.")
    try:
        ch = int(input("> "))
        if ch == 1:
            print(fake.text())
        elif ch == 2:
            print(fake.word())
        elif ch == 3:
            print(fake.words())
        elif ch == 4:
            print(fake.first_name())
        elif ch == 0:
            print("Exit.")
            break
    except Exception:
        print("You must enter a number.")
