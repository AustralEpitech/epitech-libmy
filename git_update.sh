#!/bin/bash

mr_clean
git pull
git add -A
if [ ! -z $1 ]; then
	git commit -m "$1"
else
	git commit -m "Updated"
fi
git push
