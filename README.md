# Introduction to Programming Using C++ – Level 2 🚀

This repository contains my lesson exercises and practical examples for the second level of learning C++.

---

## 📌 Source

The lessons in this repository are from:

- **Course:** Introduction to Programming Using C++ – Level 2
- **Instructor:** Dr. Mohammed Abu-Hadhoud
- **Platform:** Programming Advices

> 💡 **Note:** Each lesson file number corresponds directly to the lesson number in the course. Some numbers are skipped because those lessons had no code.

---

## 🎯 Learning Outcomes

By completing these lessons, I was able to:

- **Write better functions** using declarations, default parameters, overloading, and recursion, and understand the call stack.
- **Understand variable lifetime** with `static` and automatic variables.
- **Work with vectors** (adding, removing, accessing, and updating elements, plus iterators).
- **Handle errors** with `try` / `catch`.
- **Understand references and pointers**, including pointers to arrays and structs, `void` pointers, and dynamic memory with `new` and `delete`.
- **Work with strings and characters**
- **Read and write files** (write, append, load to a vector, save, delete, and update records).
- **Build my own small library** (header file + namespace) and reuse it across lessons.


---

## 🗂️ Project Structure

```
Main/
├── Header Files/
│   └── MyLib.h          Small library: ReadNumber() with input validation
└── Source Files/
    ├── Lesson09.cpp … Lesson60.cpp
    └── MyFile.txt       Text file used by the file lessons
```

---



## 📚 Lessons

### 🧩 Functions & Variables

| File | Topic |
| --- | --- |
| `Lesson09.cpp` | Read a number with `MyLib` and check if it is positive, negative, or zero |
| `Lesson11.cpp` | Read a number and handle invalid input (`cin.fail`) |
| `Lesson14.cpp` | Function declaration vs. definition |
| `Lesson15.cpp` | Default parameters |
| `Lesson16.cpp` | Function overloading |
| `Lesson17.cpp` | Call stack / call hierarchy |
| `Lesson19.cpp` | Recursion: print numbers in reverse and calculate power |
| `Lesson20.cpp` | Static variables |
| `Lesson21.cpp` | Automatic variables |

### 🔢 Arrays, Bitwise & Formatting

| File | Topic |
| --- | --- |
| `Lesson10.cpp` | Arrays and the range-based `for` loop |
| `Lesson12.cpp` | Bitwise AND (`&`) |
| `Lesson13.cpp` | Bitwise OR (`\|`) |
| `Lesson23.cpp` | Formatting integers with `printf` |
| `Lesson24.cpp` | Formatting floating-point numbers with `printf` |
| `Lesson25.cpp` | Formatting strings and characters with `printf` |
| `Lesson26.cpp` | Output alignment with `std::setw` |
| `Lesson27.cpp` | 10×10 multiplication table with `printf` |

### 📦 Vectors

| File | Topic |
| --- | --- |
| `Lesson28.cpp` | Create and print a vector |
| `Lesson29.cpp` | Read numbers into a vector and print them |
| `Lesson30.cpp` | Vector of employee records (struct) |
| `Lesson31.cpp` | Remove elements |
| `Lesson32.cpp` | Common vector functions |
| `Lesson46.cpp` | Access elements |
| `Lesson47.cpp` | Change elements |
| `Lesson48.cpp` | Iterators |
| `Lesson49.cpp` | `try` / `catch` with vectors |

### 🎯 Pointers & Memory

| File | Topic |
| --- | --- |
| `Lesson34.cpp` | References and shared memory address |
| `Lesson35.cpp` | What is a pointer |
| `Lesson36.cpp` | Dereferencing |
| `Lesson38.cpp` | Pointers vs. references |
| `Lesson39.cpp` | Call by reference using pointers (swap) |
| `Lesson40.cpp` | Pointers and arrays |
| `Lesson41.cpp` | Pointers and structs |
| `Lesson42.cpp` | `void` pointer |
| `Lesson43.cpp` | `new` and `delete` |
| `Lesson44.cpp` | Dynamic arrays with `new` and `delete` |

### 🔤 Strings & Characters

| File | Topic |
| --- | --- |
| `Lesson50.cpp` | Common `std::string` functions |
| `Lesson51.cpp` | `<cctype>` functions |

### 📄 Files

These lessons read and write `MyFile.txt`. Running the write, delete, or update lessons changes its content.

| File | Topic |
| --- | --- |
| `Lesson52.cpp` | Write mode |
| `Lesson53.cpp` | Append mode |
| `Lesson54.cpp` | Print file content |
| `Lesson55.cpp` | Load file lines into a vector |
| `Lesson56.cpp` | Save a vector to a file |
| `Lesson57.cpp` | Delete a record from a file |
| `Lesson58.cpp` | Update a record in a file |

### 🕒 Date & Time

| File | Topic |
| --- | --- |
| `Lesson59.cpp` | Local time and UTC |
| `Lesson60.cpp` | `tm` struct fields (year, month, day, hour, …) |

---



## 🏁 Conclusion

This level took me beyond the basics of C++. I learned how to organize code into reusable functions, manage memory with pointers and dynamic allocation, store data in vectors, and save it in files so it lasts after the program ends. Building my own small library showed me how to reuse code instead of rewriting it in every program.

These skills are the foundation for the next levels, where I will build bigger projects and solve harder problems. 💪

