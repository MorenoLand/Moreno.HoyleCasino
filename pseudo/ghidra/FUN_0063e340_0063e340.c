// FUN_0063e340  0063e340

void __fastcall FUN_0063e340(int param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar1 <= local_8) break;
    (**(code **)(*DAT_0162ee80 + 0x15c))(*(undefined4 *)(*(int *)(param_1 + 0x1bc) + local_8 * 4));
    local_8 = local_8 + 1;
  }
  return;
}

