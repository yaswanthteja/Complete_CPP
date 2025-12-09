
## 1. `sizeof()`

* **Purpose:** Returns the size (in bytes) of a data type or variable.
* **Why useful:** Helps understand memory usage.

cpp

```
cout << sizeof(int);    // usually 4
cout << sizeof(double); // usually 8
intarr[10];
cout << sizeof(arr);    // 40 (10 * 4)
```

## 2. Ternary Operator `?:`

* **Purpose:** Short form of `if…else`.
* **Why useful:** Compact conditional assignment.

cpp

```
intx = 5;
string result = (x % 2== 0) ? "Even": "Odd";
cout << result;   // Output: Odd
```

## 3. Comma Operator `,`

* **Purpose:** Evaluate multiple expressions left to right, return last value.
* **Why useful:** Combine operations in one statement (often in loops).

cpp

```
inta = (1, 2, 3);   // a = 3
for(inti = 0, j = 5; i < j; i++, j--) {
    cout << i << " "<< j << endl;
}
```

## 4. Dot (`.`) and Arrow (`->`)

* **Dot (** `.`**):** Access members of an object.
* **Arrow (** `->`**):** Access members through a pointer (dereference + access).

cpp

```
structPoint{ intx, y; };

Point p; p.x = 10; p.y = 20;   // dot
Point* ptr = &p;
ptr->x = 30; ptr->y = 40;      // arrow
```

## 5. Casting

* **Purpose:** Convert one data type into another.
* **Why useful:** Control type conversions explicitly.

cpp

```
doubled = 9.8;
inti = (int)d;                 // C-style cast → 9
intj = static_cast<int>(d);    // safer C++ cast
```

## 6. Address Operator `&`

* **Purpose:** Get the memory address of a variable.
* **Why useful:** Needed for pointers and references.

cpp

```
intx = 10;
cout << &x;   // prints address (like 0x7ffee...)
```

## 7. Pointer `*`

* **Purpose:** Declare a pointer or dereference it (access value at address).
* **Why useful:** Direct memory access and dynamic data structures.

cpp

```
intx = 10;
int* p = &x;          // pointer stores address of x
cout << p;            // prints address
cout << *p;           // dereference → prints 10
```
