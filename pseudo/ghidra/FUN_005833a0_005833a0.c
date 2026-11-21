// FUN_005833a0  005833a0

void FUN_005833a0(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  char *_Format;
  undefined4 uVar4;
  undefined4 *local_148;
  char local_120 [260];
  uint local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6be4;
  local_10 = ExceptionList;
  local_1c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_005d8230(local_1c);
  local_14 = 0;
  do {
    iVar2 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar2 <= local_14) {
      local_148 = operator_new(0x20);
      local_8 = 0;
      if (local_148 == (undefined4 *)0x0) {
        local_148 = (undefined4 *)0x0;
      }
      else {
        FUN_005fc0d0(0);
        *local_148 = KenoRoomScript::vftable;
      }
      local_8 = 0xffffffff;
      FUN_005f1b70(local_148);
      ExceptionList = local_10;
      __security_check_cookie(local_1c ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_005dcb00(local_14);
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 == 2) {
LAB_00583463:
      bVar1 = true;
    }
    else {
      piVar3 = (int *)FUN_0063aac0();
      if (*piVar3 == 3) goto LAB_00583463;
      bVar1 = false;
    }
    if (bVar1) {
      FUN_005dcb00(local_14);
      local_18 = FUN_005d52e0();
      if (*(int *)(local_18 + 0x2c) != 0) {
        FUN_005dcb00(local_14);
        iVar2 = FUN_0063aac0();
        _Format = (char *)FUN_00630f40("SID_KENO_PLAYERHASWON_FORMAT",iVar2 + 4,
                                       *(undefined4 *)(local_18 + 0x2c));
        sprintf(local_120,_Format);
        uVar4 = FUN_00630f40("SID_KENO_UPDATE",0);
        FUN_0062ff10(local_120,uVar4);
      }
      FUN_005e1410(local_14);
    }
    local_14 = local_14 + 1;
  } while( true );
}

