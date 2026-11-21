// FUN_005feff0  005feff0

void __fastcall FUN_005feff0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  while( true ) {
    iVar1 = FUN_005feda0(param_1);
    if (iVar1 <= local_8) break;
    iVar1 = FUN_005ff080(local_8);
    FUN_005f2840(*(undefined4 *)(iVar1 + 0x1ec));
    local_8 = local_8 + 1;
  }
  return;
}

