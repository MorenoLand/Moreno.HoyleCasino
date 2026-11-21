// FUN_00605f40  00605f40

int __fastcall FUN_00605f40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    FUN_005f2300(*(undefined4 *)(param_1 + 0x1ec));
    iVar1 = FUN_005feda0();
    if (iVar1 <= local_8) {
      return -1;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x1f0);
    iVar1 = local_8;
    FUN_005f2300(*(undefined4 *)(param_1 + 0x1ec));
    iVar1 = FUN_005ff080(iVar1);
    FUN_005f2300(*(undefined4 *)(param_1 + 0x1ec));
    iVar2 = FUN_005ff060(uVar3);
    if (iVar1 == iVar2) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}

