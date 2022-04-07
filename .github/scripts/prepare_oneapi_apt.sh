#!/usr/bin/env bash

# Inspired by https://github.com/oneapi-src/oneapi-ci/blob/master/scripts/setup_apt_repo_linux_no_sudo.sh

set -e

sudo_cmd="sudo"
which sudo || sudo_cmd=""

wget https://apt.repos.intel.com/intel-gpg-keys/GPG-PUB-KEY-INTEL-SW-PRODUCTS-2023.PUB
${sudo_cmd} apt-key add GPG-PUB-KEY-INTEL-SW-PRODUCTS-2023.PUB
rm GPG-PUB-KEY-INTEL-SW-PRODUCTS-2023.PUB
echo "deb https://apt.repos.intel.com/oneapi all main" | ${sudo_cmd} tee /etc/apt/sources.list.d/oneAPI.list
${sudo_cmd} apt update
