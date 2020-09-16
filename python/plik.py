#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  plik.py


def main(args):
    
    sw = input('Podaj sw: ')
    p = input('Podaj p: ')
    print(("sw wynosi"), int(p) * int(sw)/100)
    
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
