// FUN_004fda70  004fda70

bool FUN_004fda70(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return param_1 != 0;
}

