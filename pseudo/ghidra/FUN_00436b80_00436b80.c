// FUN_00436b80  00436b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00436b80(int param_1)

{
  undefined4 *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0069e824;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0062fde0("rolling dice\n",DAT_00781870 ^ (uint)&stack0xfffffffc);
  FUN_00436ac0();
  *(undefined1 *)(param_1 + 0xad4) = 1;
  *(int *)(param_1 + 0xabc) = *(int *)(param_1 + 0xabc) + 1;
  local_24 = operator_new(0x20);
  local_8 = 0;
  if (local_24 == (undefined4 *)0x0) {
    local_24 = (undefined4 *)0x0;
  }
  else {
    FUN_005fc0d0(0);
    *local_24 = CrapsRollingDiceScript::vftable;
  }
  local_8 = 0xffffffff;
  FUN_005fc420(local_24);
  (**(code **)(*DAT_0162ee84 + 0x80))(0x18a98,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  ExceptionList = local_10;
  return;
}

