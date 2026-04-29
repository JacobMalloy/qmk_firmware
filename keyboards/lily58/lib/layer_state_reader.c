#include "action_layer.h"
#include <stdio.h>

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (get_highest_layer(layer_state))
  {
  case 0:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Base");
    break;
  case 1:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Lower");
    break;
  case 2:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Raise");
    break;
  case 3:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Gaming");
    break;
  case 4:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Adjust");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%u", get_highest_layer(layer_state));
  }

  return layer_state_str;
}
