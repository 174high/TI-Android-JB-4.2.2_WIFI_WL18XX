dd if=/dev/zero of=./system.img bs=1M count=192
mkfs.ext4 system.img
rm -rf mnt-point
mkdir mnt-point
sudo mount -t ext4 -o loop system.img mnt-point/
cp -rfp  ../out/target/product/beagleboneblack/system/*  mnt-point/
sudo umount mnt-point
