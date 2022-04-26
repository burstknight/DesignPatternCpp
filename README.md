# DesignPatternCpp
`DesignPatternCpp` is a framework that has many structures for C++. However, I just developed observer pattern.

## Setup
You can use these commands to build and install:
```sh
make clean
make
sudo make install
```
And then `DesignPatternCpp` will build a static library.
- The head files will install to: `/usr/local/include/`
- The static library will install to: `/usr/local/lib/`

If you want to use g++ compile your code, you can use `-I./usr/local/include/` to set include path, and then you can use `-L/usr/local/lib/ -lDesignPatternCpp` to load the static library.
