#!/usr/bin/env bash

rev $1 | cut -f 1-$2 |rev | cat -n 