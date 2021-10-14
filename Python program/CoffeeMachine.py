# This is a program for a coffee machine to take an order, receive money, calculate cost/ change and
# output coffee while deducting the resources used and keeping a running total on profit
# other features include the command "off" to turn the machine off and "report" to see a report of
# the machines resources and profit on hand


MENU = {
    "espresso": {
        "ingredients": {
            "water": 50,
            "coffee": 18,
        },
        "cost": 1.5,
    },
    "latte": {
        "ingredients": {
            "water": 200,
            "milk": 150,
            "coffee": 24,
        },
        "cost": 2.5,
    },
    "cappuccino": {
        "ingredients": {
            "water": 250,
            "milk": 100,
            "coffee": 24,
        },
        "cost": 3.0,
    }
}

resources = {
    "water": 300,
    "milk": 200,
    "coffee": 100,
}

def is_resource_sufficient(order_ingredients):
  """ Passes in choice ingredients from MENU dictionary and checks resources returning True/False"""
  for item in order_ingredients:
    if order_ingredients[item] >= resources[item]:
      print(f"Sorry there is not enough {item}")
      return False
    else:
      return True



def process_coins():
  """ Returns total calculated from coins inserted """
  print("Please insert coins.")
  total = int(input("How many Quarters?: ")) * .25
  total += int(input("How many Dimes?: ")) * .10
  total += int(input("How many Nickles?: ")) * .05
  total += int(input("How many Pennies?: ")) * .01
  return total


def is_transaction_successful(money_received, drink_cost):
  """ Return Trues when payment is accepted or False if money is insufficient """
  if money_received >= drink_cost:
    change = round(money_received  - drink_cost, 2)
    print(f"Here is ${change} in change")
    global profit
    profit += drink_cost
    return True
  else:
    print("Sorry, that is not enough money. Money refunded.")
    return False



def make_coffee(drink_name, order_ingredients):
  """ Deduct the required ingredients from resources """
  for item in order_ingredients:
    resources[item] -= order_ingredients[item]
  print(f"Here is your {drink_name}: ☕\n")


profit = 0


is_on = True

while is_on:
    choice = input("What would you like? (espresso/ latte/ cappuccino): \n").lower()
    if choice == "off":
      is_on = False
    elif choice == "report":
      print(f"Water: {resources['water']}ml")
      print(f"Milk: {resources['milk']}ml")
      print(f"Coffee:  {resources['coffee']}g")
      print(f"Money: ${profit}\n")
    else:
      drink = MENU[choice]
      if is_resource_sufficient(drink["ingredients"]):
        payment = process_coins()
        if is_transaction_successful(payment, drink['cost']):
          make_coffee(choice, drink['ingredients'])
