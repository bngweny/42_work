ifconfig | grep -i "ether " |tr -d '[:blank:]' | cut -c 6- | echo "\n"
