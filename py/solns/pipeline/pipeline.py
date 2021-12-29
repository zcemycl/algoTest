def pipeline(*funcs):
    def helper(arg):
        for func in funcs:
            arg = func(arg)
        return arg
    return helper
