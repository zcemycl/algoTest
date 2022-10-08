1. Given 1 of 1000 coins is a double headed, if you draw a coin, toss 10 times, you get 10 heads, what is the probability of getting a double headed coin? 1/2
2. Is python interpreter language or compiler language?
3. What does a python interpreter do?
4. How does python know how much memory is required to run?
5. How is a program executed?
6. How does memory management work?
7. Why is python threading not working as good as C++?
    - Global Interpreter Lock that allows only one thread to hold the control of the Python interpreter.
8. Whats the difference between multiprocessing and threading?
9. What is hyperthreading?
10. Negative factorial in recursive program. How does it end? two's complement, zero, or stack overflow.
11. Inheritance
    - allows us to define a class that inherits all the methods and properties from another class.
        ```
        class A:
            def __init__(self, a, b):
                self.a = a
                self.b = b
        
        class B(A):
            def __init__(self, a, b):
                super().__init__(a, b)
        ```
12. Encapsulation
    -  bundling data and methods within a single unit.
        ```
        class A:
            def __init__(self):
                self._a = 'protected'
                self.__b = 'private'
            
            def _methodA(self):
                print('hihi')
        ```
13. Polymorphism
    - allows different classes to have methods with the same name.
    - inheritance by method overriding
14. Abstraction
    - An abstract class can be considered as a blueprint for other classes. It allows you to create a set of methods that must be created within any child classes built from the abstract class. A class which contains one or more abstract methods is called an abstract class. An abstract method is a method that has a declaration but does not have an implementation. While we are designing large functional units we use an abstract class. When we want to provide a common interface for different implementations of a component, we use an abstract class. 
        ```
        from abc import ABC, abstractmethod
        class Polygon(ABC):
            @abstractmethod
            def noofsides(self):
                pass
        ```
    