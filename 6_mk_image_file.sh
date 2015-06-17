rm -rf image_folder/*
cp uEnv.txt image_folder
cp kernel/arch/arm/boot/uImage image_folder
cp u-boot/u-boot.img image_folder
cp u-boot/MLO image_folder
cd out/target/product/beagleboneblack
rm -rf android_rootfs
mkdir android_rootfs
cp -r root/* android_rootfs
cp -r system android_rootfs
../../../../build/tools/mktarball.sh ../../../host/linux-x86/bin/fs_get_stats android_rootfs . rootfs rootfs.tar.bz2
cd ../../../../
cp out/target/product/beagleboneblack/rootfs.tar.bz2 image_folder
mkdir Media_Clips
cp external/ti_android_utilities/am335x/mk-mmc/mkmmc-android.sh image_folder
cp Media_Clips image_folder
rm -rf   image_folder.tar.gz
tar zcvf image_folder.tar.gz image_folder 
