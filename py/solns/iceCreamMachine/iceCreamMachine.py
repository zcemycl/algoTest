class IceCreamMachine:
    
    def __init__(self, ingredients, toppings):
        self.ingredients = ingredients
        self.toppings = toppings
        
    def scoops(self):
        res = []
        for i in self.ingredients:
            for t in self.toppings:
                res.append([i,t])
        return res