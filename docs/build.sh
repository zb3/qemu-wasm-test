cat build2.sh | docker run --rm -i -v $(pwd)/../:/qemu/ -v $(pwd)/../buildeh:/build/ buildqemueh /bin/bash
