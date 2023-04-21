#!/bin/bash -e

if ! [ -w /var/run/docker.sock ]; then
    exec sudo -- "$0" "$@"
fi

IMG=ghcr.io/epitech/coding-style-checker
TAG=latest

REPORTS="$(mktemp -d)"
LOGS="$REPORTS/coding-style-reports.log"

docker run --rm                \
    -v "$PWD:/mnt/delivery"    \
    -v "$REPORTS:/mnt/reports" \
    "$IMG:$TAG"                \
    /mnt/delivery /mnt/reports

cat "$LOGS"
echo "$(grep -c ': MAJOR:' "$LOGS") major, $(grep -c ': MINOR:' "$LOGS") minor, $(grep -c ': INFO:'  "$LOGS") info coding style error(s) reported in $LOGS"
