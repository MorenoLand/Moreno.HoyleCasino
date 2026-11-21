// FUN_006379a0  006379a0

void __fastcall FUN_006379a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_0162ee80 + 0x1f0))(param_1);
  if (iVar1 == 0) {
    FUN_006375b0();
    FUN_00639fa0();
  }
  else {
    (**(code **)(*DAT_0162ee80 + 0x1f0))();
  }
  return;
}

