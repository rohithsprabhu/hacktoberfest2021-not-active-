"""
Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction
if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction
(including bank charges). For each successful withdrawal the bank charges 0.50 $US.
Calculate Pooja's account balance after an attempted transaction.
"""
withdraw,initialbalance=map(float,input().split())
if(withdraw<initialbalance and withdraw%5==0):
    print(initialbalance-withdraw-0.5)
else:
    print(initialbalance)