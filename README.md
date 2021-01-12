Build: `docker build -t test .`

Run: `docker run -it --net=host -v "$(pwd)":"/app/" test`

Visit: `http://localhost:5000/javascript/`

Problem:

Current build configuration yields:

```
Uncaught (in promise) RuntimeError: function signature mismatch
    at NCollection_Vector::expandV() (<anonymous>:wasm-function[31]:0x1864)
    at STEPCAFControl_Reader::ReadFile() (<anonymous>:wasm-function[32]:0x192d)
    at emscripten::internal::MethodInvoker<void (STEPCAFControl_Reader::*)(), void, STEPCAFControl_Reader*>::invoke(void (STEPCAFControl_Reader::* const&)(), STEPCAFControl_Reader*) (<anonymous>:wasm-function[29]:0x1851)
    at STEPCAFControl_Reader$ReadFile [as ReadFile] (eval at new_ (http://localhost:5000/emscripten/build/main.js:30344:27), <anonymous>:8:1)
    at http://localhost:5000/javascript/myWorker.js:14:10
```
