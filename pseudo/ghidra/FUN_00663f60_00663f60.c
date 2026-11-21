// FUN_00663f60  00663f60

void __thiscall FUN_00663f60(int param_1,int param_2)

{
  FUN_005f4ed0(param_2);
  *(undefined1 *)(param_2 + 4) = 1;
  if (*(int *)(param_1 + 0x184) != 0) {
    (**(code **)(*DAT_0162ee80 + 0x11c))(param_2,*(undefined4 *)(param_1 + 0x184));
  }
  return;
}

