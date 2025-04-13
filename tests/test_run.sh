#!/usr/bin/env bash

HELP=$(bin/zadanie2 --help)
if [ -n "$HELP" ]; then
  echo "Printed help"
  echo "$HELP"
  exit 0
else
  echo "No help was printed"
  exit 1
fi
