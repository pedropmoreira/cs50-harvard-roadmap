import csv

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    scratch, c, python = 0, 0, 0
    counts = {}
    for row in reader:
        favorite = row["language"]
        if favorite in counts:
            counts[favorite] += 1
        else:
            counts[favorite] = 1

for favorite in counts:
    print(f"{favorite}: {counts[favorite]}")
