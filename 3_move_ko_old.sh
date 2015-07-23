cp ./hardware/ti/wlan/mac80211/compat_wl18xx/compat/compat.ko wl18xx-ko
cp ./hardware/ti/wlan/mac80211/compat_wl18xx/net/wireless/cfg80211.ko  wl18xx-ko
cp ./hardware/ti/wlan/mac80211/compat_wl18xx/net/mac80211/mac80211.ko   wl18xx-ko
cp ./hardware/ti/wlan/mac80211/compat_wl18xx/drivers/net/wireless/ti/wlcore/wlcore.ko  wl18xx-ko
cp ./hardware/ti/wlan/mac80211/compat_wl18xx/drivers/net/wireless/ti/wl18xx/wl18xx.ko  wl18xx-ko
cp ./hardware/ti/wlan/mac80211/compat_wl18xx/drivers/net/wireless/ti/wlcore/wlcore_sdio.ko  wl18xx-ko
tar zcvf wl18xx-ko.tar.gz wl18xx-ko
