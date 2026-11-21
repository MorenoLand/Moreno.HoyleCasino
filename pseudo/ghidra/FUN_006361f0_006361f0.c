// FUN_006361f0  006361f0

void __fastcall FUN_006361f0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))(param_1);
    if (iVar1 <= local_8) break;
    FUN_0063a3e0(local_8,0);
    local_8 = local_8 + 1;
  }
  return;
}

