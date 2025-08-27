cat build2.sh | docker run --rm -i -v $(pwd)/../:/qemu/ -v $(pwd)/../buildjspi:/build/ buildqemujspi /bin/bash
