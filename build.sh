#!/usr/bin/env bash

set -e

gcc mini_printf.c my_compute_power_rec.c my_putchar.c my_putstr.c my_put_nbr.c my_strlen.c displays_functions.c my_put_nbr_base.c my_float.c tests/my_float_tests.c -o unit_tests --coverage -lcriterion
./unit_tests
