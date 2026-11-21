// FUN_005c8dc0  005c8dc0

void __thiscall FUN_005c8dc0(int param_1,char param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc) + 1;
  if (*(int *)(*(int *)(param_1 + 0x10) + 8) < iVar1) {
    if (param_2 != '\0') {
      FUN_005c8e20(2,0);
    }
  }
  else {
    FUN_005c8e20(iVar1,1);
  }
  return;
}

