// FUN_00676570  00676570

undefined4 __thiscall FUN_00676570(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0060c9a0(param_1);
  if (param_2 < iVar1) {
    iVar1 = FUN_006765a0(param_2);
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

