class Defineage (Exception):

        pass

def foo():

    try:
        num=-1
        if num>20:
            foo()
        elif num<-10:
            print("num is >10")
        else:
            print("congrats")
    except Defineage:
        print("201")
    except ValueError:
        print("Enter integer|")
    except:
        print("wrong")
    finally:
        print("finally")
foo()
    


