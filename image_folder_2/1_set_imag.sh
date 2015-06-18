cp ../u-boot/MLO .
dd if=EMMC_raw_header.dat of=./MLO.final
dd if=MLO of=./MLO.final conv=notrunc oflag=append

cp  ../kernel/arch/arm/boot/zImage  .
cp  ../u-boot/u-boot.img  .

