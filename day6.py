#ceaser cipher project - day8

alphabet =  ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k', 'l', 'm','n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' ]

direction = input("type encode to encrrepyt to decrypt").lower()
text = input("the your message").lower()
shift = int(input("type the shift number"))

def encrypt(original_text , shift_amount):
    cipher = ""

    for letter in original_text:
        shifted_position = alphabet.index(letter) + shift_amount

        shifted_position %= len(alphabet) 
        cipher += alphabet[shifted_position]

    print(f"here is the encoded text {cipher}")

encrypt(original_text = text , shift_amount = shift)