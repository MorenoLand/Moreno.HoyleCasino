// FUN_00664010  00664010

void __thiscall FUN_00664010(int param_1,int param_2)

{
  FUN_005f4ed0(param_2);
  *(undefined1 *)(param_2 + 4) = 1;
  if (*(int *)(param_1 + 0x184) != 0) {
    (**(code **)(*DAT_0162ee80 + 0x124))(param_2,*(undefined4 *)(param_1 + 0x184));
  }
  return;
}

