![Build](https://github.com/andreymasloboev/copy_paste_detector/actions/workflows/build.yml/badge.svg)
![Tests](https://github.com/andreymasloboev/copy_paste_detector/actions/workflows/tests.yml/badge.svg)
# Sample how-to use PMD’s Copy/Paste Detector (CPD) in cmake projects

What is static source code analyzer [PMD](https://pmd.github.io/pmd/index.html)

What is PMD’s Copy/Paste Detector [CPD](https://pmd.github.io/pmd/pmd_userdocs_cpd)

# Dependencies

Packages gcc or clang compiler, cmake, google test

## How to use:

1. git clone https://github.com/andreymasloboev/copy_paste_detector.git
2. cd copy_paste_detector
3. mkdir build
4. cd build
5. cmake ..
6. cmake --build .     // don't have to build project
7. cmake --build . --target CPD

![Alt text](duplicate.png?raw=true "Optional Title")