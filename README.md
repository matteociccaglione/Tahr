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

### Cite
If you use Tahr in scientific work, consider citing [our paper](https://arxiv.org/abs/2512.01872) :

Ciccaglione, Matteo, Pierciro Caliandro, and Alessandro Pellegrini. 2025. “Tahr: The Generative Attribute Grammar Framework.” arXiv [Cs.FL]. arXiv. https://doi.org/10.48550/arXiv.2512.01872.

<details>
  <summary>BibTex</summary>
  ```bibtex
  @ARTICLE{Ciccaglione2025-bb,
  title         = "Tahr: The generative attribute grammar framework",
  author        = "Ciccaglione, Matteo and Caliandro, Pierciro and Pellegrini,
                   Alessandro",
  journal       = "arXiv [cs.FL]",
  abstract      = "In this article, we present Tahr, a framework that allows
                   taking attribute grammar specifications and generating a set
                   of software artefacts that can be used programmatically to
                   operate on text compliant with the grammars. Tahr can be used
                   as an algorithmic workbench to test different manipulations
                   of attribute grammars and support translation between
                   different languages out of the box. We describe the
                   framework's organisation, how the user can specify an
                   attribute grammar, and the generated software artefacts. We
                   also discuss how Tahr deals with ambiguous grammar
                   specifications, and how this ambiguity can be effectively
                   exploited when using attribute grammars for text generation.
                   We test the correctness of Tahr by showing the practical
                   possibility of translating MIPS programs into their
                   corresponding equivalents for x86 architectures and a custom
                   virtual machine.",
  month         =  dec,
  year          =  2025,
  archivePrefix = "arXiv",
  primaryClass  = "cs.FL"
}

  ```
</details>
