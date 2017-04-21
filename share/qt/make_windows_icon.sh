#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/421.png
ICON_DST=../../src/qt/res/icons/421.ico
convert ${ICON_SRC} -resize 16x16 421-16.png
convert ${ICON_SRC} -resize 32x32 421-32.png
convert ${ICON_SRC} -resize 48x48 421-48.png
convert 421-48.png 421-32.png 421-16.png ${ICON_DST}

