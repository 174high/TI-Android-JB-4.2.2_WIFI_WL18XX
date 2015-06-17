rm -rf out/target/product/beagleboneblack/system/lib/modules
mkdir out/target/product/beagleboneblack/system/lib/modules
cp wl18xx-ko/* out/target/product/beagleboneblack/system/lib/modules/
rm -rf out/target/product/beagleboneblack/system/etc/firmware
mkdir  out/target/product/beagleboneblack/system/etc/firmware
mkdir  out/target/product/beagleboneblack/system/etc/firmware/ti-connectivity
cp wl18xx-bin/* out/target/product/beagleboneblack/system/etc/firmware/ti-connectivity/ 
