email = input("digite seu email:").strip()

username = email[:email.index('@')]
domain = email[email.index('@') +1:]

print("Seu username é: ", {username}, "e seu domínio é ", {domain})