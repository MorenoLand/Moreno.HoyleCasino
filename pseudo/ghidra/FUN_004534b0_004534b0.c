// FUN_004534b0  004534b0

undefined4 FUN_004534b0(char *param_1,char *param_2)

{
  if (*param_2 < *param_1) {
    return 1;
  }
  if (*param_1 == *param_2) {
    if (*param_1 == '\x02') {
      if (param_2[3] <= param_1[3]) {
        return 1;
      }
      return 0;
    }
    if (param_2[3] < param_1[3]) {
      return 1;
    }
    if ((param_1[3] == param_2[3]) && (param_2[4] <= param_1[4])) {
      return 1;
    }
  }
  return 0;
}

