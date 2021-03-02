import natural

def main():
    # print(natural.__dict__)
    for i in range(1, 50):
        print(f"{i} is {natural.is_prime(i)} prime")

if __name__ == "__main__":
    main()
