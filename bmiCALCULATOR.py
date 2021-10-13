# A simple BMI calculator Using python
print("\n******-----MALNUTRATE!******------HEALTHY!******-------OVERWEIGHT!")
print("\nWELCOME TO FULLY AUTOMATED BMI CALCULATOR ARE YOU INTRESTED TO KNOW WHO YOU ARE\n\t\t\t *press Y* ")
var=input()
print("--------------------------------------------------------------------------------------------------------------------------")
msg=("\nEnter your age below ;) ")
print(msg)
age=input()
print("\nEnter your height in meter squared below :) ")
height=input()
print("\nEnter your weight in kilogram below :) ")
weight=input()
result=(int(weight)/float(height))
print("\nyour BMI =",result)
if result<18.5:
    print("\nOh!...no!..(....Eat more....)You are MALNUTRATED!.... ")
    
elif result>24.9:
    print("\nHey!...Buddy..(....Eat less....) You are OVERWEIGHT! ")
else :
    print("\nCongratulations!... Bro.. You are HEALTHY! ")    
    
