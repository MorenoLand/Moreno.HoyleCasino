// FUN_005daec0  005daec0

int __fastcall FUN_005daec0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_10;
  undefined4 local_8;
  
  local_10 = 0;
  iVar1 = FUN_00636610();
  for (local_8 = 0; local_8 < iVar1; local_8 = local_8 + 1) {
    FUN_005dcb00(local_8);
    iVar2 = FUN_005d5a50();
    if (0 < iVar2) {
      FUN_005dcb00(local_8);
      iVar2 = FUN_005d5a50();
      iVar3 = (**(code **)(*param_1 + 0x2b0))();
      if (iVar3 <= iVar2) {
        local_10 = local_10 + 1;
      }
    }
  }
  return local_10;
}

