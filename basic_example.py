import ctypes

# Library Access
dll_example = ctypes.cdll.LoadLibrary(r'lib/dll_example.dll')
# Declare the type of value that our function returns
dll_example.Factorial.restype = ctypes.c_int
# Declare parameter types
dll_example.Factorial.argtypes = [ctypes.c_int]
# Now we can use the Factorial function
answer = dll_example.Factorial(10)
print(f"Factorial: {answer}")  # 3628800

# Now let's try another function
dll_example.OutputConsole.argtypes = [ctypes.c_char_p]
dll_example.OutputConsole(b'Hello World')

dll_example.CircleArea.restype = ctypes.c_double
dll_example.CircleArea.argtypes = [ctypes.c_double]
answer = dll_example.CircleArea(15)
print(f"The area of the circle is: {answer}")

dll_example.ReverseString.restype = ctypes.c_char_p
dll_example.ReverseString.argtypes = [ctypes.c_char_p]
answer = dll_example.ReverseString(b'python')
# Try this:
# answer = dll_example.ReverseString(b'hello_world')
dll_example.OutputConsole(answer)

dll_example.MessageFunction.argtypes = [ctypes.c_char_p]
dll_example.MessageFunction(b'Hello Windows')
