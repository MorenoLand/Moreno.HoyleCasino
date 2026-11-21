// FUN_005dc610  005dc610

void FUN_005dc610(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  void *pvVar7;
  int *local_34;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a948b;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  cVar2 = FUN_00635cb0(8);
  if (cVar2 == '\0') {
    local_14 = 0;
    while( true ) {
      iVar4 = (**(code **)(*DAT_0162ee84 + 0x10c))(uVar3);
      if (iVar4 <= local_14) break;
      FUN_005dcb00(local_14);
      piVar5 = (int *)FUN_0063aac0();
      if (*piVar5 == 2) {
LAB_005dc6bf:
        bVar1 = true;
      }
      else {
        piVar5 = (int *)FUN_0063aac0();
        if (*piVar5 == 3) goto LAB_005dc6bf;
        bVar1 = false;
      }
      if (bVar1) {
        FUN_005dcb00(local_14);
        iVar4 = FUN_005d52e0();
        if (*(int *)(iVar4 + 0x2c) != 0) {
          uVar6 = FUN_00630f40("SID_KENO_WINNER",0);
          uVar6 = FUN_00630f40("SID_KENO_COLLECTWINNINGS",uVar6);
          FUN_0062ff10(uVar6);
          break;
        }
      }
      local_14 = local_14 + 1;
    }
  }
  if (DAT_00793584 == (int *)0x0) {
    pvVar7 = operator_new(0x3c10);
    local_8 = 0;
    if (pvVar7 == (void *)0x0) {
      local_34 = (int *)0x0;
    }
    else {
      local_34 = (int *)FUN_00585f20();
    }
    local_8 = 0xffffffff;
    DAT_00793584 = local_34;
    (**(code **)(*local_34 + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_00588300();
  ExceptionList = local_10;
  return;
}

