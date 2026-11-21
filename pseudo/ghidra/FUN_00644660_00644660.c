// FUN_00644660  00644660

void __thiscall FUN_00644660(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0xa8))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x84))(param_2);
    if (cVar1 != '\0') {
      FUN_005f4ed0(param_2);
      *(undefined1 *)(param_2 + 4) = 1;
    }
    DAT_01630694 = 1;
    if (*(char *)((int)param_1 + 10) != '\0') {
      iVar2 = (**(code **)(*param_1 + 0x4c))();
      param_1[0xb] = *(int *)(param_2 + 8) - iVar2;
      iVar2 = (**(code **)(*param_1 + 0x54))();
      param_1[0xc] = *(int *)(param_2 + 0xc) - iVar2;
      iVar2 = (**(code **)(*param_1 + 0x4c))();
      param_1[0xd] = iVar2;
      iVar2 = (**(code **)(*param_1 + 0x54))();
      param_1[0xe] = iVar2;
      iVar2 = FUN_005f53c0();
      param_1[0xf] = iVar2;
      uVar3 = (**(code **)(*param_1 + 0xd4))();
      (**(code **)(*param_1 + 0x6c))(uVar3);
    }
  }
  return;
}

