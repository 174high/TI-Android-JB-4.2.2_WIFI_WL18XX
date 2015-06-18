#/* search for fastboot devices */
./fastboot devices

#/* create GPT table on eMMC/SD card */
./fastboot oem format

# flash all partitions: ./fastboot flash <name> <binary> */

#/* flash SPL */
./fastboot flash spl   MLO.final

#/* flash bootloader */
./fastboot flash bootloader  u-boot.img

#/* flash boot image */
./fastboot flash boot   boot.img

#/* flash file system - system image */
./fastboot flash system  system.img

#/* flash user data */
./fastboot flash userdata  userdata.img

#/* flash cache partition */
./fastboot flash cache   cache.img

#/* reboot target */
./fastboot reboot
