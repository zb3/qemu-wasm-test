cat build2.sh | docker run --rm -i -v $(pwd)/../:/qemu/ -v $(pwd)/../build:/build/ buildqemu2 /bin/bash
