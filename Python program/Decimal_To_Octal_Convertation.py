## AUTHOR: Andy-Ra
## GITHUB: https://github.com/Andy-Ra/
## Python Concept : Decimal To Octal Convertation with Method

import re

print ("+++ Decimal to Octal Convertation +++")

ulang = 'Y'
while ulang == 'Y' or ulang == 'y':

  Decimal = int(input("Please input your Decimal Number : "))
  loop = 'Y'
  hasill = 0
  pangkat = 0
  hasil_Dec = Decimal

  print ("")
  print ("Method :")
  while (loop == 'Y'):
    hasil = int (hasil_Dec % 8)
    hasill = hasill + (hasil * pow(10, pangkat))
    hasil_Dec = int (hasil_Dec / 8)
    pangkat = pangkat + 1
    print ("{} : 8 = {} ,Remainder = {}" .format(Decimal, hasil_Dec, hasil))

    if hasil_Dec < 1:
      loop = 'N'
      print ("")
      print ("Results : {}" .format(hasill))

  ulang = input("Try Again? [Y/N] ")
  if ulang == 'N':
    print ("")
    print ("++++++ THANKYOU ++++++")  
    print ("+++++++++++++++++++++++++")
    loop = 'N'
  
