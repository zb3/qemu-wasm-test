#!/bin/bash

docker build  -t custom-emsdk-eh . -f Dockerfile.emsdk

docker build -t buildqemueh - < Dockerfile
mkdir -p ../buildeh
docker run --rm -i -v $(pwd)/../:/qemu/ -v $(pwd)/../buildeh:/hostbuild/ buildqemueh /bin/bash -c 'chown -R 1000:1000 *; cp -r * /hostbuild/;'
