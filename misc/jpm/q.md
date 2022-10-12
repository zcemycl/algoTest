1. Given 1 of 1000 coins is a double headed, if you draw a coin, toss 10 times, you get 10 heads, what is the probability of getting a double headed coin? 1/2
2. Is python interpreter language or compiler language?
    - Compile: Convert from code to bytecode. Scanning (Token) -> Parsing -> Semantic Analysis -> Symbol table (intermediate representation) -> Bytecode.
    - Interpreter: Bytecode to Machine Code.
3. What does a python interpreter do?
4. How does python know how much memory is required to run?
    - By Python Virtual Machine.
    - The methods/method calls and the references (its variables) are stored in stack memory and all the values objects are stored in a private heap
    - Interning: opimtize memory allocation.  The objects that Python does interning on them are integer numbers [-5, 256], boolean, and some strings. Interning does not apply to other types of objects such as large integers, most strings, floats, lists, dictionaries, tuples.
    - You can check if two variables are pointing to the same object using is.
5. How is a program executed?
    - Compile to bytecode, then interpret by Python interpreter to execute. When interpreter (Python Virtual Machine) is executing, it converts bytecode to machine code, so the machine can process.
6. How does memory management work?
    - Arenas -> Pool -> Block. Pools are classified as free, used and full.
    - Reference Counting: each datatype is an python object consisting of count of reference and pointer to other type. 
7. Why is python threading not working as good as C++?
    - Global Interpreter Lock that allows only one thread to hold the control of the Python interpreter.
8. Whats the difference between multiprocessing and threading?
    - One core can have multiple threads. One python process (VM) can only be run on one core/one thread. 
    - Multithreading supposes to run program in a core with multiple threads. Each thread handles a single data thread, but they all share the same memory.
    - Multiprocessing spawns multiple python processes to handle a single data, but their memories are not shared so need to group later. 
9. What is hyperthreading?
    - Intel® Hyper-Threading Technology is a hardware innovation that allows more than one thread to run on each core. More threads means more work can be done in parallel.
    - When Intel® Hyper-Threading Technology is active, the CPU exposes two execution contexts per physical core. This means that one physical core now works like two “logical cores” that can handle different software threads.
    - Under the right circumstances, the technology lets CPU cores effectively do two things at once. Multitaskers, streamers, and professionals running heavily threaded programs can boost their computing experience by upgrading
10. Negative factorial in recursive program. How does it end? two's complement, zero, or stack overflow.
    - Two's Complement: first bit is used for negative number. The negative of a number can be, 3=(011), invert -4=(100), plus1 -3=(101).
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
15. P vs NP vs NP Hard vs NP Complete
    - P: The general class of questions for which some algorithms can provide an answer in polynomial time.
    - NP (nondeterministic polynomial time): The class of questions for which an answer can be verified in polynomial time.
    - NP hard (nondeterministic polynomial acceptable problems): It is suspected that there are no polynomial-time algorithms for NP-hard problems (not proven, hypothesis). Finding a polynomial time algorithm to solve any NP-hard problem would give polynomial time algorithms for all the problems in NP. 
        ```
        P \neq NP
        ```
    - NP Complete (nondeterministic polynomial time complete): It is a problem for which the correctness of each solution can be verified quickly (in polynomial time) and a brutal-force search algorithm can find a solution by trying all possible solutions.
16. Program counter
    - a register in a computer processor that contains the address of the instruction being executed at the current time. As each instruction gets fetched, the program counter increases its stored value by 1. After the instruction is fetched, the program counter points to the next instruction in the sequence. When the computer restarts or is reset, the program counter normally reverts to 0.
17. CPU register
    - A quickly accessible location available to a computer processor.
18. Lock vs Mutex vs Semaphore vs Monitor 
    - Lock only allows only one thread to enter the part thats locked and the lock is not shared with any other processes.
    - Mutex can work across multiple processes, such as computer-wide and application-wide.
    - Semaphore allows a limited number of threads to enter. 
    - Monitor in an operating system is one method for achieving process synchronization. Programming languages help the monitor to accomplish mutual exclusion between different activities in a system.
19. Deadlock vs Livelock vs Starvation
    - Deadlock is a situation in which more than 1 process is blocked because it is holding a resource and also requires some resource that is acquired by some other process.
    - Livelock occurs when 2 or more processes continually repeat the same interaction in response to changes in the other processes without doing any useful work.
    - Starvation: When requests for resources keep on happening, some processes may never get serviced due to policy even though they are not deadlocked.

### References
1. [Two's complement](https://en.wikipedia.org/wiki/Two%27s_complement)
2. [The Magic That Runs Your Code: Python Interpreters](https://www.codingdojo.com/blog/interpreters-run-python-code)
3. [Python, Memory, and Objects](https://towardsdatascience.com/python-memory-and-objects-e7bec4a2845)
4. [Python Memory Management: The Essential Guide](https://scoutapm.com/blog/python-memory-management)
5. [Inside The Python Virtual Machine](https://leanpub.com/insidethepythonvirtualmachine/read#leanpub-auto-interpreter-and-thread-states)
6. [Multiprocessing vs. Threading in Python: What Every Data Scientist Needs to Know](https://blog.floydhub.com/multiprocessing-vs-threading-in-python-what-every-data-scientist-needs-to-know/)
7. [Memory Management in Python](https://realpython.com/python-memory-management/)
8. [What Is the Python Global Interpreter Lock (GIL)?](https://realpython.com/python-gil/)
9. [Intro to Threads and Processes in Python](https://medium.com/@bfortuner/python-multithreading-vs-multiprocessing-73072ce5600b)
10. [What Is Hyper-Threading?](https://www.intel.co.uk/content/www/uk/en/gaming/resources/hyper-threading.html)
11. [cls vs self — Method Types In Python](https://levelup.gitconnected.com/method-types-in-python-2c95d46281cd)