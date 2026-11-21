// FUN_005f6ae0  005f6ae0

void __thiscall FUN_005f6ae0(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x58)) {
    FUN_005f6b60();
    *(char *)(param_1 + 0x58) = param_2;
    FUN_005f6b60();
  }
  return;
}

