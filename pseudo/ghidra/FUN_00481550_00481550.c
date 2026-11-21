// FUN_00481550  00481550

int __thiscall FUN_00481550(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_c;
  int local_8;
  
  local_8 = 0;
  FUN_005dcb00(param_2,param_1);
  iVar1 = FUN_005d5a50();
  for (local_c = 0; iVar2 = FUN_0047f950(), local_c < iVar2; local_c = local_c + 1) {
    if (local_c != param_2) {
      FUN_005dcb00(local_c,param_1);
      iVar2 = FUN_005d5a50();
      if (iVar1 < iVar2) {
        local_8 = local_8 + 1;
      }
    }
  }
  return local_8;
}

