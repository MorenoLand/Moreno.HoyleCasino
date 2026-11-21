// FUN_00481490  00481490

int __fastcall FUN_00481490(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_0047f950(param_1);
    if (iVar1 <= local_8) break;
    FUN_005dcb00(local_8);
    iVar1 = FUN_005d5a50();
    if (local_c < iVar1) {
      FUN_005dcb00(local_8);
      local_c = FUN_005d5a50();
    }
    local_8 = local_8 + 1;
  }
  return local_c;
}

