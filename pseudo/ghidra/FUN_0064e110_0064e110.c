// FUN_0064e110  0064e110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_0064e110(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ac035;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)
           (**(code **)(*DAT_0162ee84 + 0x240))(local_20,DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_18 = *puVar2;
  local_14 = puVar2[1];
  if ((DAT_01630698 & 1) == 0) {
    DAT_01630698 = DAT_01630698 | 1;
    local_8 = 0;
    _DAT_0076d4f0 = (**(code **)(*DAT_0162ee84 + 0x244))(3200000);
    _DAT_0076d4f4 = 0x186bf;
    _DAT_0076d4f8 = 0x30d401;
    _DAT_0076d4fc = (**(code **)(*DAT_0162ee84 + 0x244))(0x30d401);
    _DAT_0076d500 = 0x186c3;
    _DAT_0076d504 = 0x30d402;
    _DAT_0076d508 = (**(code **)(*DAT_0162ee84 + 0x244))(0x30d402);
    _DAT_0076d50c = 0x186d7;
    _DAT_0076d510 = 0x30d404;
    _DAT_0076d514 = (**(code **)(*DAT_0162ee84 + 0x244))(0x30d404);
    _DAT_0076d518 = 0xffffffff;
    _DAT_0076d51c = 0;
    _DAT_0076d520 = 0;
    local_8 = 0xffffffff;
  }
  if ((DAT_01630698 & 2) == 0) {
    DAT_01630698 = DAT_01630698 | 2;
    local_8 = 1;
    _DAT_0076d4c0 = (**(code **)(*DAT_0162ee84 + 0x244))(3200000);
    _DAT_0076d4c4 = 0x186c2;
    _DAT_0076d4c8 = 0x30d402;
    _DAT_0076d4cc = (**(code **)(*DAT_0162ee84 + 0x244))(0x30d402);
    _DAT_0076d4d0 = 0x186d8;
    _DAT_0076d4d4 = 0x30d404;
    _DAT_0076d4d8 = (**(code **)(*DAT_0162ee84 + 0x244))(0x30d404);
    _DAT_0076d4dc = 0xffffffff;
    _DAT_0076d4e0 = 0;
    _DAT_0076d4e4 = 0;
    local_8 = 0xffffffff;
  }
  if (param_4 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_18;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_14;
    }
    cVar1 = (**(code **)(*param_1 + 0x160))();
    if (cVar1 == '\0') {
      *param_4 = &DAT_0076d4b8;
    }
    else {
      *param_4 = &DAT_0076d4e8;
    }
    uVar3 = 1;
  }
  ExceptionList = local_10;
  return uVar3;
}

