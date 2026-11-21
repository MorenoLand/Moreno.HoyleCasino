// FUN_0065e7b0  0065e7b0

uint __thiscall FUN_0065e7b0(uint param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x1d4) == '\0') {
    param_1 = (**(code **)(*DAT_0162ee84 + 0x368))(param_2);
  }
  else {
    param_1 = param_1 & 0xffffff00;
  }
  return param_1;
}

