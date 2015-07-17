export PATH=/home/snq/TI_Android_JB_4.2.2_DevKit_4.1.1/prebuilts/gcc/linux-x86/arm/arm-eabi-4.6/bin:$PATH

make TARGET_PRODUCT=beagleboneblack  OMAPES=4.x rowboat_clean -j 16


make TARGET_PRODUCT=beagleboneblack  OMAPES=4.x WILINK=wl18xx -j 16

. build/envsetup.sh


