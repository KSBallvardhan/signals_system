
from sympy import symbols, simplify

# Define symbolic variable s
s = symbols('s')

# Constants
omega0_val = 0.3489
B_val =0.0883

# Define s_L in terms of s, omega0, and B
s_L = (s**2 + omega0_val**2) / (B_val * s)

# Given roots
s1 = -0.1982 - 1.0404j
s2 = -0.4785 - 0.4310j
s3 = -0.4785 + 0.4310j
s4 = -0.1982 + 1.0404j
# Define the given polynomial expression
polynomial_expr = 768.07/ ((s_L - s1) * (s_L - s2) * (s_L - s3) * (s_L - s4))

# Simplify the expression
simplified_expr = simplify(polynomial_expr)

# Print the simplified expression
print("Simplified Polynomial in terms of s:")
print(simplified_expr)
