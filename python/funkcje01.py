#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  funkcje01.py

def sumuj(l1, l2):
    """
    Funkcja sumuje 2 podane liczby
    """
    
    suma = l1 + l2
    print("Suma", suma)
    
def odejmij(o1, o2):
    """
    Funkcja odejmuje 2 podane liczby
    """
    
    roznica = o1 - o2
    print("Różnica", roznica)

def main(args):
    a = int(input("Podaj liczbę: "))
    b = int(input("Podaj liczbę: "))
    
    sumuj(a, b) #wywołanie funkcj
    
    odejmij(a, b)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
