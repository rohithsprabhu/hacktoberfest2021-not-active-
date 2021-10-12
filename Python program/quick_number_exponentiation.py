import math

# Get_power: Returns "val" raised to the power of "power" with modulo "mod"
# Does that in O(logN), where N is power to raise number by
def Get_power(val, power, mod):
	power = int(power)
	val = int(val)
	mod = int(mod)

	powers = [ 0 for i in range(__next_power_of_2_power(power)) ]

	powers[0] = val

	for bit in range(1, len(powers)):
		powers[bit] = ( powers[bit - 1] * powers[bit - 1] ) % mod

	result = 1

	for bit in range(len(powers)):
		if int(2**bit) & power:
			result = (result * powers[bit]) % mod

	return result


def __next_power_of_2_power(x):
    return 1 if x == 0 else math.ceil(math.log2(x))



if __name__ == "__main__":

	print( Get_power(2, 5, 10000) )

	print( Get_power(2, 20, 1e9+7) )
