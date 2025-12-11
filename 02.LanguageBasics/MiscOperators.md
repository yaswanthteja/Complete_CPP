## 1. `sizeof()`

* **Purpose:** Returns the size (in bytes) of a data type or variable.
* **Why useful:** Helps understand memory usage.

```cpp
cout << sizeof(int);    // usually 4
cout << sizeof(double); // usually 8
int arr[10];
cout << sizeof(arr);    // 40 (10 * 4)

```

## 2. Ternary Operator `?:`

* **Purpose:** Short form of `if…else`.
* **Why useful:** Compact conditional assignment.

```cpp
int x = 5;
string result = (x % 2 == 0) ? "Even" : "Odd";
cout << result;   // Output: Odd

```

## 3. Comma Operator `,`

* **Purpose:** Evaluate multiple expressions left to right, return last value.
* **Why useful:** Combine operations in one statement (often in loops).

```cpp
int a = (1, 2, 3);   // a = 3
for (int i = 0, j = 5; i < j; i++, j--) {
    cout << i << " " << j << endl;
}

```

## 4. Dot (`.`) and Arrow (`->`)

* **Dot (** `.`**):** Access members of an object.
* **Arrow (** `->`**):** Access members through a pointer (dereference + access).

```cpp
struct Point { int x, y; };

Point p; p.x = 10; p.y = 20;   // dot
Point* ptr = &p;
ptr->x = 30; ptr->y = 40;      // arrow

```

## 5. Casting

What is Casting?

* **Casting**   means converting a value from one data type to another.
* Useful when you want to control how data is interpreted (e.g., float → int, int → char).
* Two main styles in C++:

  1. **C‑style casting**→ `(type)value`
  2. **C++ casting operators**→ `static_cast`, `dynamic_cast`, `const_cast`,`reinterpret_cast`
* **Purpose:** Convert one data type into another.
* **Why useful:** Control type conversions explicitly.

```cpp
double d = 9.8;
int i = (int)d;                 // C-style cast → 9
int j = static_cast<int>(d);    // safer C++ cast
```




## 6. Address Operator `&`

* **Purpose:** Get the memory address of a variable.
* **Why useful:** Needed for pointers and references.

```cpp
int x = 10;
cout << &x;   // prints address (like 0x7ffee...)
```

## 7. Pointer `*`

* A **pointer** is a variable that stores the **memory address** of another variable.
* Instead of holding a value directly, it “points” to where the value is stored in memory.
* **Purpose:** Declare a pointer or dereference it (access value at address).
* **Why useful:** Direct memory access and dynamic data structures.

```cpp

int x = 10;
int* p = &x;          // pointer stores address of x
cout << p;            // prints address
cout << *p;           // dereference → prints 10

```

## 8. Unary Plus (`+`)

* **Purpose:** Indicates a positive value (rarely used explicitly).
* **Effect:** Doesn’t change the value.

```cpp
int x = 5;
int y = +x;   // y = 5

```

## 9. Unary Minus (`-`)

* **Purpose:** Negates the value (changes sign).
* **Effect:** Positive → Negative, Negative → Positive.

```cpp
int x = 5;
int y = -x;   // y = -5

```

## 10. Increment (`++`)

* **Purpose:** Increases value by 1.
* **Forms:**
  * **Pre‑increment (** `++x`**)** → increments first, then uses the value.
  * **Post‑increment (** `x++`**)** → uses the value first, then increments.

```cpp
int x = 5;
cout << ++x;   // Output: 6 (pre)
cout << x++;   // Output: 6, then x becomes 7 (post)

```

## 11. Decrement (`--`)

* **Purpose:** Decreases value by 1.
* **Forms:**
  * **Pre‑decrement (** `--x`**)** → decrements first, then uses the value.
  * **Post‑decrement (** `x--`**)** → uses the value first, then decrements.

```cpp
int x = 5;
cout << --x;   // Output: 4 (pre)
cout << x--;   // Output: 4, then x becomes 3 (post)

```

## 12. Logical Complement (`!`)

* **Purpose:** Flips a boolean value.
* **Effect:**
  * `true` → `false`
  * `false` → `true`
* **Used in conditions.**

```cpp
bool flag = true;
cout << !flag;   // Output: 0 (false)

int x = 0;
if (!x) {        // since x=0 → false → !x = true
    cout << "Condition true";   // prints this
}

```

## **Memory trick for revision:**

* `sizeof` → “How big?”
* `?:` → “Choose one.”
* `,` → “Do all, keep last.”
* `.` → “Direct access.”
* `->` → “Pointer access.”
* `cast` → “Change type.”
* `&` → “Where is it?”
* `*` → “What’s inside?”
* `+` → “keep positive”
* `-` → “flip sign”
* `++` → “add one”
* `--` → “subtract one”
* `!` → “flip truth”
