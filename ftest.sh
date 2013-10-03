#!/bin/sh

set -ue

. ./qemu.sh

arm-none-eabi-gcc -o ftest.elf ftest.c -g -mcpu=cortex-m3 -mthumb -T generic-m-hosted.ld -std=c99

echo
echo "============================================="
echo "Running QEMU"
echo "============================================="
qemu-system-arm  -cpu cortex-m3 -nographic -monitor null -serial null -semihosting -kernel ftest.elf

