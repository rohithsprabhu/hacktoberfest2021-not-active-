'''
text courtacy : https://onlinerandomtools.com/generate-random-string
'''

import re

text = '''This example creates ten random DNA strings of length sixteen 
using a custom string alphabet consisting of ACGT characters. 
ACGT stands for Adenine (A), Cytosine (C), Guanine (G), and 
Thymine (T), which are the four bases in a DNA molecule.
'''

'''
We are removing text inside the parenthesis and the preceding white space from the given text
'''

new_text = re.sub(r'\s\(\D\)' , '' , text)
print('Old Text')
print('-'*8,'\n', text)

print('Formated text')
print('-'*22,'\n', new_text)