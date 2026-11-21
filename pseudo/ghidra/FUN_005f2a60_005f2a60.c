// FUN_005f2a60  005f2a60

undefined4 __thiscall FUN_005f2a60(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = 0;
  do {
    iVar1 = FUN_0060c9a0(param_1);
    if (iVar1 <= local_8) {
      return 0;
    }
    uVar2 = param_2;
    FUN_0060ca40(local_8);
    iVar1 = FUN_005ff060(uVar2);
    if (iVar1 != 0) {
      if (param_3 == 0) {
        FUN_0060ca40(local_8);
        uVar2 = FUN_005ff060(param_2);
        return uVar2;
      }
      param_3 = param_3 + -1;
    }
    local_8 = local_8 + 1;
  } while( true );
}

