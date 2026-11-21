// FUN_005f4f50  005f4f50

void __thiscall FUN_005f4f50(int *param_1,int param_2)

{
  if ((*(uint *)(param_2 + 0x1c) & 8) == 0) {
    if ((*(uint *)(param_2 + 0x1c) & 0x10) != 0) {
      *(undefined1 *)((int)param_1 + 9) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    if (*(char *)((int)param_1 + 10) != '\0') {
      (**(code **)(*param_1 + 0x44))
                (*(int *)(param_2 + 8) - param_1[0xb],*(int *)(param_2 + 0xc) - param_1[0xc]);
    }
  }
  return;
}

