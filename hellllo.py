#!/usr/bin/env python
#  
ROK_TERAZ = 2017    
ROK_PYTHON = 1991


def parzyste(n):
    ile=list(range(0,n+1,2))
    print(ile)
    return len(ile)
    
    
def main(args):
    imie = input("podaj imie: ")
    print ("witaj %s" %imie)
    wiek = int(input ("ile masz lat ? "))
    rok_urodzenia = (ROK_TERAZ - wiek )
    print ("urodziłeś się w " ,rok_urodzenia , " roku")
    
    #if rok_urodzenia >ROK_PYTHON:
    #        print("jestem młodszy")
    #elif rok_urodzenia < ROK_PYTHON
    #        print("jestem starszy")
    
    n = int(input("podaj liczbę:  "))
    print("parzystych  :  ", parzyste(n))
            
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
