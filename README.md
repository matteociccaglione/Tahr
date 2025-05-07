# Tahr: The Generative Attribute Grammar Framework  
**Tahr** is a powerful framework for creating parsers, generators, and translators based on attribute grammars. It enables users to define up to two languages using a high-level syntax and automatically generates a C library that implements:  
- A **parser** for each language
- A **code generator** for each language
- A **translator** between the two languages

Attribute grammars are specified using the Tahr syntax, a concise and expressive format that captures both syntax and semantics. Tahr handles the heavy lifting of generating efficient, low-level C code, allowing language designers and tool developers to focus on grammar and transformations.  

### Features  
- Support for **up to two languages** defined via attribute grammars
- Automatic generation of:
  - Parsers
  - Generators
  - Translators
- Outputs a self-contained **C library**
- Designed for extensibility and performance
### Use Cases  
- **Fuzzing test mutation**: Generate valid and semantically rich test inputs for fuzzing tools
- **Assembler cross-language translation**: Define and translate between different assembly dialects or instruction formats  
