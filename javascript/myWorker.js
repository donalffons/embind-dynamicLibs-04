import main from '/emscripten/build/main.js';

(async () => {
  const o = await main({
    locateFile: f => "/emscripten/build/main.wasm",
    dynamicLibraries: [
      "/emscripten/build/library.wasm",
    ],
    noInitialRun: true,
  });
  const reader = new o.STEPCAFControl_Reader();
  reader.ReadFile();
})();
