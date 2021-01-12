FROM emscripten/emsdk:2.0.12

RUN \
  emsdk update-tags && \
  emsdk install tot && \
  emsdk activate tot

WORKDIR /app/

ENTRYPOINT [ "./run.sh" ]
