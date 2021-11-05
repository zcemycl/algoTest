import time

def timeit(func):
    def dummy(*args,**kwargs):
        t1 = time.time()    
        result = func(*args,**kwargs)
        t2 = time.time() 
        print('Testing case: ', func.__name__,'takes',t2-t1,'(s).')
        return result
    return dummy