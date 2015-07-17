#/bin/sh
rm -rf ./wifidrv/*
cp ./net/mac80211/mac80211.ko ./wifidrv
cp ./net/wireless/cfg80211.ko  ./wifidrv
cp ./compat/compat.ko ./wifidrv
cp ./drivers/net/wireless/ti/wl18xx/wl18xx.ko ./wifidrv
cp ./drivers/net/wireless/ti/wlcore/wlcore_sdio.ko ./wifidrv
cp ./drivers/net/wireless/ti/wlcore/wlcore.ko ./wifidrv
cp ./drivers/net/wireless/ti/wl12xx/wl12xx.ko ./wifidrv

