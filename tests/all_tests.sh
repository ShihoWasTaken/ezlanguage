#!/bin/bash

echo -e "\n\033[1;32m=========================================="
echo -e "\tExécution des tests valides"
echo -e "==========================================\033[0m\n"
sh ./valid_tests.sh
echo -e "\n\033[1;31m=========================================="
echo -e "\tExécution des tests non valides"
echo -e "==========================================\033[0m\n"
sh ./unvalid_tests.sh
echo -e "\n\033[1;33m=========================================="
echo -e "\tExécution des autres tests"
echo -e "==========================================\033[0m\n"
sh ./other_tests.sh
