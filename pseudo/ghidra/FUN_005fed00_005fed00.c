// FUN_005fed00  005fed00

int __fastcall FUN_005fed00(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_005feda0(param_1);
    if (iVar1 <= local_8) break;
    FUN_005ff080(local_8);
    iVar1 = FUN_005f5590();
    local_c = iVar1 + local_c;
    local_8 = local_8 + 1;
  }
  iVar1 = FUN_005fb2b0(0);
  if (iVar1 != 0) {
    FUN_005fb2b0(0);
    iVar1 = FUN_005f5590();
    local_c = iVar1 + local_c;
  }
  iVar1 = FUN_005fb2b0(1);
  if (iVar1 != 0) {
    FUN_005fb2b0(1);
    iVar1 = FUN_005f5590();
    local_c = iVar1 + local_c;
  }
  return local_c;
}

