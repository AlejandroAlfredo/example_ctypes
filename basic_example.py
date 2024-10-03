import ctypes

# Library Access
# You can also use the library made in c
dll_example = ctypes.cdll.LoadLibrary(r"lib/example_cpp.dll")

# Declare the type of value that our function returns
dll_example.Factorial.restype = ctypes.c_int 

# Declare parameter types
dll_example.Factorial.argtypes = [ctypes.c_int]

# Now we can use the Factorial function
answer = dll_example.Factorial(10)
print(f"Factorial: {answer}")  # 3628800

# Now let's try another function
dll_example.OutputConsole.argtypes = [ctypes.c_char_p]
dll_example.OutputConsole(b"Hello World")

dll_example.CircleArea.restype = ctypes.c_double
dll_example.CircleArea.argtypes = [ctypes.c_double]
answer = dll_example.CircleArea(15)
print(f"The area of the circle is: {answer}")

dll_example.ReverseText.restype = ctypes.c_char_p
dll_example.ReverseText.argtypes = [ctypes.c_char_p]
answer: bytes = dll_example.ReverseText(b"Hello world!")
print(f"Reverse: {answer.decode()}")

# Try this:
# dll_example.MessageFunction.argtypes = [ctypes.c_char_p]
# dll_example.MessageFunction(b"Hello Windows")
