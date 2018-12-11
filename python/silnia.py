#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  potega.py


def potega_re(a, n):
    if n == 0:
        return 1 
    return silnia_re(n-1) * n
    
def silnia_it(n):
    # 0! = 1
    # 1! = 1
    # 4! = 24
    # 5! = 120
    # n! = 1 * ... * n
    wynik = 1
    for i in range(1, n + 1):
        wynik = wynik * i
        print(wynik)
    return wynik

def main(args):
    #  zmienne lokalne
    n = int(input("Podaj liczbę: "))
    silnia_it(n)
    #print("{}! = {}".format(n, silnia_it(n)))
    # ~assert(silnia_it(0) == 1)
    # ~assert(silnia_it(1) == 1)
    # ~assert(silnia_it(4) == 24)
    # ~assert(silnia_it(5) == 120)
    return 0

if __name__ == '__main__':
    import sys
sys.exit(main(sys.argv))
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
