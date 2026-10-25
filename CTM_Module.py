def CTM_Module(n):
    if n==1:
        return n
    else:
        return n*CTM_Module(n-1)
