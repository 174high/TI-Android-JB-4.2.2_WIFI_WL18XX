/* creating 192MB, it can be configure as per need */
dd if=/dev/zero of=./cache.img bs=1M count=192
mkfs.ext4 cache.img
