# Module 04 - Subtype Polymorphism, Abstract Classes, Interfaces

Module 04 of the C++ course delves into the concepts of subtype polymorphism, abstract classes, and interfaces. Subtype polymorphism allows objects of different classes to be treated as objects of a common base class, promoting code flexibility and reusability. Abstract classes serve as the blueprint for derived classes, defining common attributes and functions that must be implemented by the derived classes. Interfaces provide a way to define a set of pure virtual functions that derived classes must implement.

## Learning Outcomes
Throughout Module 04, I accomplished the following learning outcomes:

- Learned about subtype polymorphism and how it enables treating objects of different classes as objects of a common base class.
- Implemented a simple base class called Animal, with derived classes Dog and Cat, showcasing how to use polymorphism to call the appropriate member functions based on the object's type.
- Created a Brain class and associated it with Dog and Cat classes using composition.
- Ensured proper object initialization and destruction by implementing constructors and destructors with specific messages.
- Implemented deep copy functionality to ensure that copies of Dog and Cat objects don't share the same Brain data.
- Applied the concept of abstract classes to make the default Animal class non-instantiable, providing a blueprint for derived classes.

## Key Concepts Covered
Module 04 covered the following key concepts:

- Subtype polymorphism and virtual functions
- Abstract classes and pure virtual functions
- Object composition and deep copying
- Memory management and avoiding memory leaks

## Reflection
Module 04 deepened my understanding of polymorphism, abstract classes, and interfaces, essential aspects of object-oriented programming. Implementing the Animal, Dog, and Cat classes and leveraging polymorphism to call the appropriate functions based on the object's type showcased the power and flexibility of subtype polymorphism.

The use of abstract classes in preventing the instantiation of the base class demonstrated how to define a common interface for derived classes without providing concrete implementations. This abstraction allows developers to create a hierarchy of classes with shared functionalities and contractually defined behavior.

The inclusion of composition and deep copy functionality in the Brain class further emphasized the importance of proper memory management and avoiding memory leaks in complex class relationships.

Overall, Module 04 provided valuable insights into advanced C++ programming techniques that enhance code organization, maintainability, and reusability. I look forward to applying these concepts in more complex projects and exploring additional topics in the upcoming modules. The C++ journey has been a great learning experience, and I'm eager to continue honing my skills as a C++ developer.
