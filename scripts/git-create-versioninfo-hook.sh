#!/bin/bash

## Automatically generate a file with git version info
##
## Example:
##   v1.0.0-5-g97b8bc3d44
## Install:
##   cp git-create-versioninfo-hook.sh .git/hooks/post-commit
##   cp git-create-versioninfo-hook.sh .git/hooks/post-checkout
##   cp git-create-versioninfo-hook.sh .git/hooks/post-merge
##   chmod +x .git/hooks/post-*

INPUT='gen/version.h.template'
OUTPUT='src/platform/version.h'

exec 1>&2
VERSION=`git describe --long --dirty --abbrev=10 --tags`
cp $INPUT $OUTPUT
sed -i "s/@GIT_COMMIT_HASH@/$VERSION/g" "$OUTPUT"
