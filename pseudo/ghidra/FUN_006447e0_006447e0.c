// FUN_006447e0  006447e0

void __thiscall FUN_006447e0(int *param_1,int param_2)

{
  char cVar1;
  
  FUN_005f4e90(param_2);
  cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_2 + 4) = 1;
  }
  (**(code **)(*param_1 + 200))();
  DAT_01630694 = 0;
  return;
}

