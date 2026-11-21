// FUN_00677100  00677100

void __fastcall FUN_00677100(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_006375b0(param_1);
  iVar1 = FUN_0063a040();
  uVar2 = FUN_00677400();
  uVar3 = FUN_006375b0();
  iVar4 = FUN_0063aac0(param_1,uVar2,uVar3);
  *(undefined4 *)(iVar4 + 0x374) = uVar2;
  FUN_00637610();
  iVar4 = FUN_00677400();
  if (iVar1 != iVar4) {
    (**(code **)(*DAT_0162ee80 + 0x10c))();
  }
  return;
}

