#!/bin/zsh

cd $(dirname $0)

gcc -I. reiserfs.c -o reiserfs
