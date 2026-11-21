// FUN_004446f0  004446f0

bool FUN_004446f0(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return param_1 != 0;
}

