#!/bin/bash
make
for file in `ls ../models/`; do
  ./compress ../models/$file $file.compress $file.decompress
done
