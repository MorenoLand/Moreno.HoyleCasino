// FUN_00615c70  00615c70

void __thiscall FUN_00615c70(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_005f4ed0(param_2);
  *(undefined1 *)(param_2 + 4) = 1;
  cVar1 = FUN_00615160();
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*param_1 + 0x54))();
    param_1[0xc] = *(int *)(param_2 + 0xc) - iVar2;
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x4c))();
    param_1[0xb] = *(int *)(param_2 + 8) - iVar2;
  }
  return;
}

