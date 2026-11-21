// FUN_00406b50  00406b50

bool FUN_00406b50(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return param_1 != 0;
}

