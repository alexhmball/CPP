# Module 08 - Templated Containers, Iterators, Algorithms

Module 08 of the C++ course focuses on templated containers, iterators, and algorithms. In this module, we explore how to create and use templated containers and implement custom iterators to iterate through those containers. Additionally, we develop custom algorithms to manipulate the data stored in those containers.

## Learning Outcomes
Throughout Module 08, I accomplished the following learning outcomes:

- Created a function template easyfind that can find the first occurrence of an integer in a container of type T.
- Developed a class template Span to store a maximum of N integers and provided member functions to add numbers to the Span and find the shortest and longest span between the stored numbers.
- Implemented a custom container MutantStack based on std::stack that is iterable and provides custom iterators to traverse the elements.

## Key Concepts Covered
Module 08 covered the following key concepts:

- Function templates: Creating generic functions that can work with multiple data types.
- Class templates: Creating generic classes that can work with different types.
- Templated containers: Implementing containers that can hold elements of any type using templates.
- Custom iterators: Implementing iterators to traverse the elements of a custom container.
- STL containers and algorithms: Understanding and utilizing STL containers (e.g., std::stack, std::list) and algorithms (e.g., std::begin(), std::end()) for various operations.

## Reflection
Module 08 introduced me to templated containers and custom iterators, allowing me to create flexible and reusable data structures. The implementation of the easyfind function template demonstrated how to find elements in a container of any type, supporting generic searching.

The development of the Span class template showcased how to store and manipulate data in a container with a fixed size. The class provided member functions to add numbers, find the shortest and longest spans, and handled exceptions for edge cases.

The creation of the MutantStack class template showed how to add iterable capabilities to an existing container, in this case, std::stack. The custom container provided custom iterators that allowed traversal of its elements, similar to other STL containers like std::list.

Overall, Module 08 provided valuable insights into templated containers, iterators, and algorithms, enabling me to create more versatile and efficient code in C++. I am excited to apply these concepts to real-world projects and further improve my understanding of C++ programming.
