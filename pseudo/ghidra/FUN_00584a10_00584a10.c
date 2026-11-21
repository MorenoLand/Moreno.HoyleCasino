// FUN_00584a10  00584a10

void __thiscall FUN_00584a10(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_005f56a0(param_2);
  if (((cVar1 != '\0') && ((char)param_1[0x1b] != '\0')) && (*(char *)(param_2 + 4) == '\0')) {
    if (*(int *)(param_2 + 0x18) == 1) {
      cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
      if ((cVar1 != '\0') && ((*(uint *)(param_2 + 0x1c) & 0x10) != 0)) {
        *(undefined1 *)(param_2 + 4) = 1;
      }
      cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
      if ((cVar1 != '\0') && ((*(uint *)(param_2 + 0x1c) & 8) != 0)) {
        *(undefined1 *)(param_2 + 4) = 1;
        FUN_00585240(param_2);
      }
    }
    else if ((*(int *)(param_2 + 0x18) == 2) && ((*(uint *)(param_2 + 0x1c) & 8) != 0)) {
      *(undefined1 *)(param_2 + 4) = 1;
    }
  }
  return;
}

