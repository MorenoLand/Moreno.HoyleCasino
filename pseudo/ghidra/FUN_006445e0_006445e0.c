// FUN_006445e0  006445e0

void __thiscall FUN_006445e0(int *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xa8))();
  if ((cVar1 == '\0') && (DAT_01630694 == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
    if (cVar1 != '\0') {
      FUN_005f4ed0(param_2);
      *(undefined1 *)(param_1 + 2) = 0;
      *(undefined1 *)((int)param_1 + 9) = 0;
      *(undefined1 *)(param_2 + 4) = 1;
    }
    (**(code **)(*param_1 + 0xc4))();
  }
  return;
}

