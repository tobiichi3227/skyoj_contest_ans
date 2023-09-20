def main():
    score = int(input())

    if score > 100 or score < 0:
        print('Are you kidding me?')
    elif score >= 90 and score <= 100:
        print('{} belongs to A'.format(score))
    elif score >= 60 and score <= 89:
        print('{} belongs to B'.format(score))
    elif score < 60:
        print('{} belongs to C'.format(score))

if __name__ == "__main__":
    # miyuki is my wife and sister

    main()

