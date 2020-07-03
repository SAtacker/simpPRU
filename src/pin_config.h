#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

#include "cJSON/cJSON.h"
#include "klib/khash.h"
#include <stdio.h>
#include <stdlib.h>

#define POCKETBEAGLE_PINOUT "{\"pru0\": {\"16\": [[\"P1_20\", 1]], \"7\": [[\"P1_29\", 3]], \"4\": [[\"P1_31\", 3]], \"1\": [[\"P1_33\", 3]], \"0\": [[\"P1_36\", 3]], \"15\": [[\"P2_18\", 1],[\"P2_33\", 2]], \"14\": [[\"P2_22\", 1],[\"P2_24\", 2]], \"6\": [[\"P2_28\", 3]], \"3\": [[\"P2_30\", 3]], \"2\": [[\"P2_32\", 3]], \"5\": [[\"P2_34\", 3]]}, \"pru1\": {\"9\": [[\"P1_02\", 3]], \"11\": [[\"P1_04\", 3]], \"15\": [[\"P1_30\", 3]], \"14\": [[\"P1_32\", 3]], \"10\": [[\"P1_35\", 3]], \"16\": [[\"P2_31\", 1]], \"8\": [[\"P2_35\", 3]]}}"
#define IN 1
#define OUT 2

KHASH_MAP_INIT_INT(pin_config, int);

int config_pins(int pru_pin_number, int mode, char *pru_id);

#endif