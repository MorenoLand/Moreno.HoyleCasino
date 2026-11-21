// FUN_00671750  00671750

uint FUN_00671750(uint param_1)

{
  if (*(char *)(param_1 + 4) == '\0') {
    param_1 = (uint)(*(int *)(param_1 + 0x18) == 3);
  }
  else {
    param_1 = param_1 & 0xffffff00;
  }
  return param_1;
}

