#!/bin/bash

docker build  -t custom-emsdk-eh . -f Dockerfile.emsdk

docker build --progress=plain -t buildqemujspi - < Dockerfile
mkdir -p ../build
docker run --rm -i -v $(pwd)/../:/qemu/ -v $(pwd)/../buildjspi:/hostbuild/ buildqemujspi /bin/bash -c 'chown -R 1000:1000 *; cp -r * /hostbuild/;'
