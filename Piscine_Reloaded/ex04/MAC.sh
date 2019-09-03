ifconfig -a | grep "ether " | sed 's/ether //' | tr ' ' '\n' | tr -d '\t'
