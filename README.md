## Download CPPUTEST

```bash
git clone https://github.com/cpputest/cpputest.git ; cd cpputest
mkdir cmake-build ; cd cmake-build
cmake ../ -DCMAKE_INSTALL_PREFIX:PATH=/opt/cpputest-$(git describe)
make -j3

sudo make install
sudo ln -s /opt/cpputest-$(git describe) /opt/cpputest

```

## Compile code

```bash
mkdir build ; cd build
CPPUTEST_HOME=/opt/cpputest/ cmake -DCOMPILE_TESTS=ON ../
make -j3
```
