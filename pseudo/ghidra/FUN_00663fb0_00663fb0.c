// FUN_00663fb0  00663fb0

void __thiscall FUN_00663fb0(int param_1,int param_2)

{
  *(undefined1 *)(param_2 + 4) = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if ((*(int *)(param_2 + 0x20) != DAT_016306a4) && (*(int *)(param_1 + 0x184) != 0)) {
    (**(code **)(*DAT_0162ee80 + 0x120))(param_2,*(undefined4 *)(param_1 + 0x184));
  }
  return;
}

