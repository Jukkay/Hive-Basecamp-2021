ifconfig -a | grep ether | sed 's/ether//' | cut -b 10-26
