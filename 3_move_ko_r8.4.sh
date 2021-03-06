echo copy from compat_wl18xx_r8.4 to wl18xx-ko
cp ./compat_wl18xx_r8.4/compat/compat.ko wl18xx-ko
cp ./compat_wl18xx_r8.4/net/wireless/cfg80211.ko  wl18xx-ko
cp ./compat_wl18xx_r8.4/net/mac80211/mac80211.ko   wl18xx-ko
cp ./compat_wl18xx_r8.4/drivers/net/wireless/ti/wlcore/wlcore.ko  wl18xx-ko
cp ./compat_wl18xx_r8.4/drivers/net/wireless/ti/wl18xx/wl18xx.ko  wl18xx-ko
cp ./compat_wl18xx_r8.4/drivers/net/wireless/ti/wlcore/wlcore_sdio.ko  wl18xx-ko
ls -all wl18xx-ko
echo compress wl18xx-ko to wl18xx-ko_r8.4.tar.gz
tar zcvf wl18xx-ko_r8.4.tar.gz wl18xx-ko
