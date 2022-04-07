#!/usr/bin/env bash

set -e -x

test $(intsum 1) -eq 1
test $(intsum 2) -eq 3
test $(intsum 10) -eq 55
