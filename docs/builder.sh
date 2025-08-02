#!/bin/bash

docker build -t buildqemu2 - < Dockerfile
mkdir -p ../build
docker run --rm -i -v $(pwd)/../:/qemu/ -v $(pwd)/../build:/hostbuild/ buildqemu2 /bin/bash -c 'chown -R 1000:1000 *; cp -r * /hostbuild/;'
