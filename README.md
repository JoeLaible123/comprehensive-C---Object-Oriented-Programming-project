# World War I Historical Figures Database - C++ OOP Project

[![C++](https://img.shields.io/badge/C++-17-blue.svg)](https://en.cppreference.com/w/cpp/17)
[![Build Status](https://img.shields.io/badge/build-passing-brightgreen.svg)]()
[![License](https://img.shields.io/badge/license-MIT-green.svg)]()

## 📋 Project Overview

An advanced C++ Object-Oriented Programming application that demonstrates comprehensive OOP principles through an interactive historical database system. This project models World War I historical figures using sophisticated inheritance hierarchies, polymorphism, and modern C++ features.

**Developed as part of CIS 554 - Object Oriented Programming in C++**  
*Syracuse University | Spring 2024*

## 🚀 Key Technical Skills Demonstrated

### Object-Oriented Programming Excellence
- **Multi-Level Inheritance**: 3-tier class hierarchy with proper base-derived relationships
- **Polymorphism**: Virtual function implementation with method overriding
- **Encapsulation**: Proper data hiding with getter/setter methods
- **Abstraction**: Clean separation of interface and implementation

### Advanced C++ Features
- **STL Containers**: Efficient use of `std::vector` for dynamic data management
- **Memory Management**: Safe pointer usage and dynamic object creation
- **Template Usage**: Generic programming concepts
- **Exception Safety**: Proper resource management patterns

### Software Engineering Best Practices
- **Modular Design**: Separation of header files (.h) and implementation files (.cpp)
- **Code Organization**: Logical file structure and naming conventions
- **Documentation**: Comprehensive inline comments and project documentation
- **User Experience**: Interactive CLI with input validation and error handling

## 🏗️ Architecture & Design

### Class Hierarchy Structure
```
WW1_Major_Figure (Base Class)
├── Entente (Derived Class)
│   └── Victory_Additions (Second-Level Derived)
└── Central_Powers (Derived Class)
    └── Defeat_Additions (Second-Level Derived)
```

### Core Components
- **`WW1_Major_Figure.h/.cpp`** - Base class with fundamental person attributes
- **`Entente.h/Entente_imp.cpp`** - Allied powers faction implementation
- **`Central.h/Central_imp.cpp`** - Central powers faction implementation  
- **`victory.h/victory_imp.cpp`** - Victory conditions and achievements
- **`Defeat.h/defeat_imp.cpp`** - Defeat factors and consequences
- **`Final_project_main.cpp`** - Application entry point and user interface

## 💡 Technical Highlights

### 1. Dynamic Polymorphism
```cpp
// Base class pointers enabling runtime polymorphism
std::vector<WW1_Major_Figure*> ww1VectorE;
for (auto& ww1Ptr : ww1VectorE) {
    ww1Ptr->additional_note(); // Calls overridden method
}
```

### 2. Memory Management
- Safe pointer usage with proper lifecycle management
- Dynamic object creation with `new` operator
- Vector-based container management for scalability

### 3. Interactive User Interface
- Menu-driven navigation system
- Real-time object creation and manipulation
- Input validation and error handling

### 4. Data Organization
- Multiple vector containers for different object categories
- Efficient data retrieval and display mechanisms
- Scalable design supporting additional historical figures

## 🛠️ Technologies & Tools

- **Language**: C++17
- **Compiler**: G++ (MinGW-w64)
- **IDE**: Visual Studio Code / Visual Studio
- **Build System**: Command-line compilation
- **Version Control**: Git (ready for GitHub integration)

## 📦 Installation & Usage

### Prerequisites
- C++17 compatible compiler (GCC, Clang, or MSVC)
- Windows/Linux/macOS operating system

### Compilation Instructions
```bash
# Clone the repository
git clone <repository-url>
cd Final_Project

# Compile all source files
g++ -o final_project.exe Final_project_main.cpp WW1_Major_Figure_imp.cpp Entente_imp.cpp Central_imp.cpp victory_imp.cpp defeat_imp.cpp

# Run the application
./final_project.exe
```

### Alternative Compilation (Individual Files)
```bash
g++ -std=c++17 -Wall -Wextra -O2 *.cpp -o wwi_database
```

## 🎯 Features & Functionality

### Core Features
✅ **Historical Figure Management**: Add, view, and categorize WWI personalities  
✅ **Faction Classification**: Organize figures by Entente or Central Powers  
✅ **Achievement Tracking**: Record victory conditions and defeat factors  
✅ **Interactive Exploration**: Browse figures by category or allegiance  
✅ **Dynamic Object Creation**: User-driven addition of new historical figures  

### Advanced Features
✅ **Polymorphic Behavior**: Runtime method resolution based on object type  
✅ **Vector-Based Storage**: Efficient container management with iterators  
✅ **Memory Safety**: Proper pointer handling and resource management  
✅ **Extensible Design**: Easy addition of new classes and functionality  

## 📊 Sample Output
```
**********************************************************************************************************
                    Welcome to Joe's WW1 Note Book
        This program will help you take notes about historic figures from World War1
**********************************************************************************************************

First let us see an overview all figures we have stored in the notebook.
These are the notable figures from the war...

John Pershing
Was born in the year 1860 and died in year 1948.
Was From USA.
This figure served in the Entente with the title: General
```

## 🎓 Learning Outcomes

This project demonstrates proficiency in:
- **Object-Oriented Design Patterns**
- **C++ Best Practices and Modern Features**
- **Memory Management and Resource Safety**
- **Software Architecture and Modularity**
- **User Interface Design and Experience**
- **Code Documentation and Maintainability**

## 🔮 Future Enhancements

- [ ] Database integration (SQLite/PostgreSQL)
- [ ] JSON/XML data serialization
- [ ] Unit testing framework integration (Google Test)
- [ ] GUI implementation with Qt or similar framework
- [ ] RESTful API development for web integration
- [ ] Docker containerization for deployment

## 👨‍💻 About the Developer

**Joseph Laible**  
*Aspiring Software Developer*

This project showcases my ability to:
- Design and implement complex object-oriented systems
- Write clean, maintainable, and well-documented code
- Apply software engineering principles to real-world problems
- Create user-friendly interfaces and experiences
- Work with modern C++ features and best practices

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 🤝 Contact & Connect

- **LinkedIn**: [Your LinkedIn Profile]
- **Email**: [Your Email]
- **GitHub**: [Your GitHub Profile]
- **Portfolio**: [Your Portfolio Website]

---

**⭐ If you found this project helpful or interesting, please consider giving it a star!**

*This project represents my commitment to writing high-quality, professional-grade software and demonstrates my readiness to contribute to software development teams.*