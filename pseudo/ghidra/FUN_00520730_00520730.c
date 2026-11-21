// FUN_00520730  00520730

void FUN_00520730(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00520540(param_1);
  *(undefined1 *)(iVar1 + param_2 + 0xc) = 1;
  uVar2 = FUN_00520d60();
  FUN_005209d0(uVar2);
  return;
}

