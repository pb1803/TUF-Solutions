# [Infix to Postfix Conversion](https://takeuforward.org/practice/dsa/infix-to-postfix-conversion?category=expression-conversions&source=strivers-a2z-dsa-sheet&sidebar=0&solution=solution)

![Difficulty: Core](https://img.shields.io/badge/Difficulty-Core-eab308?style=for-the-badge)

---

## 📝 Problem Statement

You are given a string expression representing a valid infix mathematical expression. Your task is to convert this expression into its equivalent postfix notation, also known as Reverse Polish Notation (RPN).

The expression may include:

- Operands: single lowercase English letters (a to z) or single-digit numbers (0 to 9)

- Binary operators: +, -, *, /, ^

- Parentheses: ( and ) to indicate grouping and precedence

Operator precedence (from highest to lowest):

- ^ (exponentiation)

- *, / (multiplication and division)

- +, - (addition and subtraction)

Associativity **:**

- ^ is right-associative

- All other operators are left-associative

- Parentheses override standard precedence

You must return the corresponding postfix expression as a string.

The result must not contain any spaces or separators between characters.

### Example 1:

**Input:** expression = "a+b*c"

**Output:** "abc*+"

**Explanation:**

Multiplication has higher precedence than addition, so b * c is evaluated first, then added to a.

### Example 2:

**Input:** expression = "(a+b)*c"

**Output:** "ab+c*"

**Explanation:**

The parentheses ensure that a + b is evaluated before multiplying with c.

Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

### Constraints

- 1 <= expression.length <= 10^4
- The expression is syntactically valid and properly parenthesized
- Operands are always single characters
- No whitespace appears in the input or output
- All operators are binary

---

## 💡 Complexity Analysis

- **Time Complexity:** $\mathcal{O}(N)$
- **Space Complexity:** $\mathcal{O}(1)$

---

<p align="center">
  Generated with ❤️ by <a href="https://github.com/Arora-Sir">Mohit Arora</a> &nbsp;|&nbsp; Practice on <a href="https://takeuforward.org/pricing?affiliate=arorasir">TakeUForward (TUF+)</a> &nbsp;|&nbsp; ⭐ <a href="https://github.com/Arora-Sir/TUFHub">Star TUFHub on GitHub</a>
</p>
