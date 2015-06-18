cp  ../out/target/product/beagleboneblack/ramdisk.img .
cp  ../out/host/linux-x86/bin/mkbootimg   .
./mkbootimg --kernel zImage --ramdisk ramdisk.img --base 0x80000000 --cmdline "console=ttyO0,115200n8 androidboot.console=ttyO0 mem=512M root=/dev/ram0 rw initramfs=0x81000000,8M init=/init ip=off" -o boot.img
