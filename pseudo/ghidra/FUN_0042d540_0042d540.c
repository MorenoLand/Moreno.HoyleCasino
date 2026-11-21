// FUN_0042d540  0042d540

void __thiscall FUN_0042d540(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  
  if (*(char *)(param_2 + 4) == '\0') {
    iVar1 = *(int *)(param_2 + 0x18);
    if (iVar1 == 1) {
      cVar2 = (**(code **)(*param_1 + 0x84))(param_2);
      if ((cVar2 != '\0') && (*(char *)((int)param_1 + 0x18d) == '\0')) {
        *(undefined1 *)(param_1 + 2) = 1;
        *(undefined1 *)((int)param_1 + 9) = 1;
        *(undefined1 *)(param_2 + 4) = 1;
      }
    }
    else if (iVar1 == 2) {
      cVar2 = (**(code **)(*param_1 + 0xa8))();
      if (cVar2 != '\0') {
        param_1[0x61] = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        *(undefined1 *)((int)param_1 + 9) = 0;
        FUN_0042d750();
        *(undefined1 *)((int)param_1 + 0x18d) = 1;
      }
    }
    else if ((iVar1 == 3) && (cVar2 = (**(code **)(*param_1 + 0xa8))(), cVar2 != '\0')) {
      FUN_0042d640(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    }
  }
  return;
}

