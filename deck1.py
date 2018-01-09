import random

suits=['C','D','H','S']
ranks=['7','8','9','10','J','Q','K','A']
deck=[]
i=0
for x in suits:
    for y in ranks:
        deck.append(y + ' of ' + x)
        i+=1
'''
for k in deck:
    print(k)
print("\n")'''
random.shuffle(deck) 

for k in deck:
    print(k)

print("\n")
print(random.choice(deck))
