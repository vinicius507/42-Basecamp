ifconfig | grep "ether\|ax25\|ARC-net\|netrom" | awk '{print $2}'
