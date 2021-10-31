#make a game hiscore program that contains more score then overwrite the past score

def game():
    return 100

score=game()
with open("sample.txt") as f:
    hiscore=int(f.read())

if hiscore<score:
    with open("sample.txt", "w") as f:
        f.write(str(score))