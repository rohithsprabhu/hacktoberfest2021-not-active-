primes = lambda q: (i for i in xrange(1,q) if i not in [j*k for j in xrange(1,i) for k in xrange(1,i)])
for i in primes(10):
   print i,
