// FUN_005e88e0  005e88e0

void __thiscall FUN_005e88e0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x80) != param_2) {
    FUN_005f1ad0(*(undefined4 *)(&DAT_0075ecb8 + param_2 * 4));
    FUN_005e8af0();
    *(int *)(param_1 + 0x80) = param_2;
    FUN_005e8aa0();
  }
  return;
}

