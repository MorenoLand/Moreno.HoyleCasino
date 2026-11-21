// FUN_005f0d60  005f0d60

void __fastcall FUN_005f0d60(undefined4 *param_1)

{
  int iVar1;
  char local_a0 [132];
  uint local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006a9d25;
  local_10 = ExceptionList;
  local_1c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = sciRoom::vftable;
  local_8 = 2;
  sprintf(local_a0,"Max Memory used = %d.\n",DAT_007950ac,local_1c);
  FUN_0062fde0(local_a0);
  while (iVar1 = FUN_0060c9a0(), iVar1 != 0) {
    local_14 = (undefined4 *)FUN_0060ca40(0);
    FUN_0060c890(local_14);
    if (local_14 != (undefined4 *)0x0) {
      (**(code **)*local_14)(1);
    }
  }
  if (DAT_00795078 != (undefined4 *)0x0) {
    if (DAT_00795078 != (undefined4 *)0x0) {
      (**(code **)*DAT_00795078)(1);
    }
    DAT_00795078 = (undefined4 *)0x0;
  }
  if (DAT_00795088 != (undefined4 *)0x0) {
    if (DAT_00795088 != (undefined4 *)0x0) {
      (**(code **)*DAT_00795088)(1);
    }
    DAT_00795088 = (undefined4 *)0x0;
  }
  if (DAT_0079507c != (undefined4 *)0x0) {
    if (DAT_0079507c != (undefined4 *)0x0) {
      (**(code **)*DAT_0079507c)(1);
    }
    DAT_0079507c = (undefined4 *)0x0;
  }
  if (DAT_00795080 != (undefined4 *)0x0) {
    if (DAT_00795080 != (undefined4 *)0x0) {
      (**(code **)*DAT_00795080)(1);
    }
    DAT_00795080 = (undefined4 *)0x0;
  }
  if (DAT_00795084 != (undefined4 *)0x0) {
    if (DAT_00795084 != (undefined4 *)0x0) {
      (**(code **)*DAT_00795084)(1);
    }
    DAT_00795084 = (undefined4 *)0x0;
  }
  iVar1 = FUN_0060ca40(0);
  if (iVar1 != *(int *)(DAT_015e55e8 + 0x14)) {
    FUN_005e9f20("(sciPlane *)SCIshell->planes.At(0) == SCIshell->pMainPlane",
                 "..\\scilib\\sciroom.cpp",0x3c);
  }
  while (iVar1 = FUN_0060c9a0(), 1 < iVar1) {
    local_18 = (undefined4 *)FUN_0060ca40(1);
    if (local_18 != (undefined4 *)0x0) {
      (**(code **)*local_18)(1);
    }
  }
  FUN_005fb0c0();
  FUN_005f1b70(0);
  DAT_015e55e4 = 0;
  local_8._0_1_ = 1;
  FUN_0060c6a0();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0060c6a0();
  local_8 = 0xffffffff;
  FUN_005e9e40();
  ExceptionList = local_10;
  __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
  return;
}

