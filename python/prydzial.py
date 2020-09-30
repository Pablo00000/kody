#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  prydzial.py



def main(args):
    
    a = int(input("podaj wynik"))
    
    if (a < 20):
        print ("podstawowa")
    if (20 <= a and a < 40):
        print ("Sredniozzawansowana")
    if (a > 40):
        print ("zaawansowana")
    return 0
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
