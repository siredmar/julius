#!/bin/bash
cp git-create-versioninfo-hook.sh ../.git/hooks/post-commit
cp git-create-versioninfo-hook.sh ../.git/hooks/post-checkout
cp git-create-versioninfo-hook.sh ../.git/hooks/post-merge
chmod +x .git/hooks/post-*