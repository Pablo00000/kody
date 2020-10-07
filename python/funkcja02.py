#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  funkcje01.py

licz1 = int(input("Podaj liczbę: "))
licz2 = int(input("Podaj liczbę: "))

def sumuj(l1, l2):
    """
    Funkcja sumuje 2 podane liczby
    """
    
    suma = l1 + l2
    print("Suma", suma)


def main(args):
    a = int(input("Podaj liczbę: "))
    b = int(input("Podaj liczbę: "))
    
    sumuj(l1, l2)
    
def sumuj2():
    print("Suma: ", licz1, licz2)



if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
