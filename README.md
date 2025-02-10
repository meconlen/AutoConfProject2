# Introduction

This repository is a template used for autotools projects. It's designed around C and C++ projects but can be easily adapted. 

# Building

```
autoreconf -vfi
./configure
make check
```

Recall if you need to add include and library paths

```
./configure CPPFLAGS="-I/opt/homebrew/include" LDFLAGS="-L/opt/homebrew/lib"
```
