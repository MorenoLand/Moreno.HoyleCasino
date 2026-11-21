// FUN_00666a20  00666a20

undefined4 __fastcall FUN_00666a20(int *param_1)

{
  int iVar1;
  size_t _Size;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = (**(code **)(*DAT_0162ee84 + 0x16c))();
    if (iVar1 <= local_8) break;
    _Size = FUN_00666f80();
    memset(*(void **)(*param_1 + local_8 * 4),0,_Size);
    local_8 = local_8 + 1;
  }
  return 1;
}

