// FUN_00664060  00664060

void __thiscall FUN_00664060(int param_1,int param_2)

{
  *(undefined1 *)(param_2 + 4) = 1;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  if (*(int *)(param_1 + 0x184) != 0) {
    (**(code **)(*DAT_0162ee80 + 0x128))(param_2,*(undefined4 *)(param_1 + 0x184));
  }
  return;
}

