// FUN_005db5d0  005db5d0

void FUN_005db5d0(undefined1 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *local_50;
  char local_30 [16];
  uint local_20;
  char local_19;
  int local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9293;
  local_10 = ExceptionList;
  local_20 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_19 = '\0';
  cVar1 = FUN_005da830(local_20);
  if (cVar1 != '\0') {
    local_14 = (undefined4 *)(**(code **)(*DAT_007947e0 + 0x31c))();
    for (local_18 = 0; local_18 < 100; local_18 = local_18 + 1) {
      sprintf(local_30,"user%d.log",local_18);
      cVar1 = FUN_0063ab10(local_30);
      if (cVar1 != '\0') {
        iVar2 = FUN_0063aac0();
        cVar1 = FUN_006368b0(iVar2 + 4);
        if (cVar1 == '\0') {
          iVar2 = FUN_005d5a50();
          iVar3 = FUN_005da880();
          if (iVar3 <= iVar2) {
            local_19 = '\x01';
            break;
          }
        }
      }
    }
    if (local_14 != (undefined4 *)0x0) {
      (**(code **)*local_14)(1);
    }
    if (local_19 == '\0') {
      uVar4 = FUN_00630f40("SID_CASINO_TOURNAMENTPLAY",0);
      uVar4 = FUN_00630f40("SID_CASINO_TOURNAMENT_OTHERS_NOTENOUGHMONEY",uVar4);
      FUN_0062ff10(uVar4);
      goto LAB_005db7b0;
    }
  }
  if (DAT_016306b0 == (int *)0x0) {
    pvVar5 = operator_new(0x1ec);
    local_8 = 0;
    if (pvVar5 == (void *)0x0) {
      local_50 = (int *)0x0;
    }
    else {
      local_50 = (int *)FUN_005e36b0(param_1,param_2,param_3,param_4,param_5);
    }
    local_8 = 0xffffffff;
    DAT_016306b0 = local_50;
    (**(code **)(*local_50 + 0x3c))();
    FUN_005f7340(0,0);
  }
  FUN_0064ec80(param_1,param_2,param_3,param_5,0);
LAB_005db7b0:
  ExceptionList = local_10;
  __security_check_cookie(local_20 ^ (uint)&stack0xfffffffc);
  return;
}

