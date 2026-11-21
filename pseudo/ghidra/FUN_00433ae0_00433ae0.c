// FUN_00433ae0  00433ae0

bool FUN_00433ae0(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return param_1 != 0;
}

