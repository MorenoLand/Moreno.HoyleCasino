// FUN_005efd20  005efd20

uint __fastcall FUN_005efd20(uint param_1)

{
  if (((*(int *)(param_1 + 0x5c) != 0) && (*(int *)(param_1 + 0x28) != 0)) &&
     (*(int *)(param_1 + 0xb0) != 0)) {
    param_1 = FUN_005f54c0();
    param_1 = param_1 & 0xff;
    if (param_1 == 0) {
      return 1;
    }
  }
  return param_1 & 0xffffff00;
}

