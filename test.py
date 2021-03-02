import natural

def main():
    # print(natural.__dict__)
    for i in range(1, 50):
        print(f"{i} is {'' if natural.is_prime(i) else 'not'} prime")

if __name__ == "__main__":
    main()
