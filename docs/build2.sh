set -ex

DEBUG=-g

EXTRA_CFLAGS="-O3 $DEBUG -Wno-error=unused-command-line-argument -matomics -mbulk-memory -DNDEBUG -DG_DISABLE_ASSERT -D_GNU_SOURCE -sASYNCIFY=1 -sUSE_SDL=2 -pthread -sPROXY_TO_PTHREAD=1 -sOFFSCREENCANVAS_SUPPORT=1 -sFORCE_FILESYSTEM -sALLOW_TABLE_GROWTH -sTOTAL_MEMORY=2300MB -sWASM_BIGINT -sMALLOC=mimalloc -sEXPORT_ES6=1 -sASYNCIFY_IMPORTS=ffi_call_js -fwasm-exceptions -sSUPPORT_LONGJMP=wasm -sWASM_LEGACY_EXCEPTIONS=0"

if [ ! -e Makefile ]; then
  emconfigure /qemu/configure --static --target-list=x86_64-softmmu --cpu=wasm32 --cross-prefix= --without-default-features --enable-system --with-coroutine=fiber --enable-virtfs --enable-sdl --extra-cflags="$EXTRA_CFLAGS" --extra-cxxflags="$EXTRA_CFLAGS" --extra-ldflags="-sEXPORTED_RUNTIME_METHODS=addFunction,removeFunction,FS"
fi

emmake make -j $(nproc) qemu-system-x86_64

chown -R 1000:1000 .

sed -i '/^function _egl/ {
  N
  s/\(.*\)\n.*if (ENVIRONMENT_IS_PTHREAD) return proxyToMainThread.*/\1/
}' qemu-system-x86_64

sed -i -E -e 's/((function _egl|var _egl[^=]+=function)[^{]+\{)if\(ENVIRONMENT_IS_PTHREAD\)return proxyToMainThread(Ptr)?\([^)]+\);/\1/g' qemu-system-x86_64

cp qemu-system-x86_64 /qemu/docs/qemu-system-x86_64.js; cp qemu-system-x86_64.wasm /qemu/docs/

chown -R 1000:1000 /qemu/docs/

