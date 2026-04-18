menu={"rice":500,"chicken":2000}
def Add_menu():
    name=input("Enter the name of gategory")
    price=float(input("Enter the price of gategory"))
    menu[name]=price
    print(f"Done:{name}")
    
def update_price():
     name=input("Enter the name of gategory")
     new_price=float(input("Enter the price of gategory"))
     if name in menu :
         menu[name]=new_price
         print("done")
     else:
          print("the item doesn't find")
def display():
    print("menu of food")
    for item,price in menu.items():
        print(f"{item}:RY{price}")
def calculate(order):
    
    total=0
    for item, amount in order.items():
        if item in menu:
            total+=menu[item]*amount
        else:
            print("sorry your order doesn't in menu")
    return total

while True:
    print("the menu")
    print("1Add")
    print("2disply")
    print("3updae of price")
    print("4total")
    print("5get out")
    choice=input("enter the choice")
    if choice=="1":
         Add_menu()
    elif choice=="2":
        display()
    elif choice=="3":
         update_price()
    elif choice=="4":
        order={}
        while True:
            item=input("enter the name of item or done to get out ")
            if item=="done":
                break
            amount=int(input("enter your amount "))
            order[item]=amount
            total=calculate(order)
            print(f"the total is:RY{total}")
    elif choice=="5":
        print("done")
        break
    else:
        print("incorrect choice")
        