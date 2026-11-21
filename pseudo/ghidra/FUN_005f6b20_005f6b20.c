// FUN_005f6b20  005f6b20

void __thiscall FUN_005f6b20(int param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x59)) {
    FUN_005f6b60();
    *(char *)(param_1 + 0x59) = param_2;
    FUN_005f6b60();
  }
  return;
}

