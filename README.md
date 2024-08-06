# MatchFinder

## Overview

MatchFinder is an advanced matching algorithm project that utilizes a radix tree data structure to efficiently map and match member attributes. This project demonstrates proficiency in data structures, algorithm design, and C++ programming.

### Features

- **Efficient Attribute Mapping:** Uses a radix tree to map members' attributes, improving query performance.
- **Advanced Matching Algorithm:** Translates member values into compatible attributes to find matches effectively.
- **Large-Scale Data Handling:** Capable of handling databases with over 100,000 members.

### Project Structure

- **main.cpp:** The main program file that initializes and runs the matching algorithm.
- **PersonProfile.h:** Header file defining the structure and attributes of member profiles.
- **RadixTree.cpp:** Implementation of the radix tree data structure used for efficient attribute mapping.
- **RadixTree.h.gch:** Precompiled header for the radix tree to enhance compilation efficiency.
- **provided.h:** Additional utility functions and structures used throughout the project.
- **translator.txt:** Configuration file for mapping and translating member attributes.

### Getting Started

#### Prerequisites

Ensure you have the following installed on your development environment:
- A modern C++ compiler (e.g., GCC, Clang)
- Make or a similar build tool

#### Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/zhangandrew2/MatchFinder.git
    cd MatchFinder
    ```

2. Build the project:
    ```bash
    make
    ```

3. Run the program:
    ```bash
    ./a.out
    ```

### Usage

- **Configuration:** Modify `translator.txt` to customize how member attributes are mapped and translated.
- **Execution:** The main program will read member data, apply the matching algorithm, and output the results.
