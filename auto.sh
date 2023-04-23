#!/bin/sh
setxkbmap us altgr-intl
dwmblocks&
sleep 0.5
xrandr -s 2560x1080
picom&
feh --bg-scale /home/sebastian/background/solarized.jpg
#doas openvpn --config /home/sebastian/vpn_configs/Latvia_UDP.ovpn

