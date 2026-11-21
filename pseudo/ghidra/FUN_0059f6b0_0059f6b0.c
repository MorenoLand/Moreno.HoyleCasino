// FUN_0059f6b0  0059f6b0

void __thiscall FUN_0059f6b0(int param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_1c [10];
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a772c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005dcb00(param_2,DAT_00781870 ^ (uint)&stack0xfffffffc);
  piVar3 = (int *)FUN_0063aac0();
  if (*piVar3 != 2) {
    piVar3 = (int *)FUN_0063aac0();
    if (*piVar3 != 3) {
      bVar1 = false;
      goto LAB_0059f71e;
    }
  }
  bVar1 = true;
LAB_0059f71e:
  if (bVar1) {
    cVar2 = FUN_005df700(0xffffffff);
    if (cVar2 == '\0') {
      FUN_0057ae30();
    }
    else {
      FUN_0057ab80(0xb,&DAT_00751198);
      FUN_005a3c40(param_2);
    }
    piVar3 = (int *)FUN_005cb880(local_1c,param_2);
    if (*piVar3 == 0) {
      pvVar4 = operator_new(0x24);
      local_8 = 0;
      if (pvVar4 == (void *)0x0) {
        local_44 = 0;
      }
      else {
        local_44 = CPrintDialog(0);
      }
      local_8 = 0xffffffff;
      FUN_005fc420(local_44);
    }
    else {
      iVar5 = FUN_0059b080(param_2,&local_11,&local_12);
      iVar6 = FUN_00630f40("SID_BIGRAISE_STRATEGY_ALL_IN_REQUIRED");
      if (iVar5 == iVar6) {
        pvVar4 = operator_new(0x24);
        local_8 = 1;
        if (pvVar4 == (void *)0x0) {
          local_48 = 0;
        }
        else {
          local_48 = CPrintDialog(2);
        }
        local_8 = 0xffffffff;
        FUN_005fc420(local_48);
      }
      else {
        FUN_005a3c20(param_2,1);
        FUN_0059c780();
      }
    }
  }
  else {
    FUN_0057ae30();
    if (*(char *)(param_1 + 8) == '\0') {
      *(undefined1 *)(param_1 + 8) = 1;
      uVar7 = FUN_00637810(2);
      FUN_005da360(uVar7);
    }
    else {
      *(undefined1 *)(param_1 + 8) = 0;
      FUN_0059b080(param_2,&local_11,&local_12);
      FUN_005a1ea0(param_2,local_11,local_12);
      if (local_11 != '\0') {
        FUN_005a3b40(local_12 != '\0',param_2);
      }
      FUN_005a3b20(param_2,1);
      (**(code **)(**(int **)(DAT_007935cc + 4) + 8))(1,0);
    }
  }
  ExceptionList = local_10;
  return;
}

