// FUN_00635330  00635330

undefined4 __thiscall FUN_00635330(int *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int local_28;
  int local_24;
  undefined1 local_20 [12];
  int local_14;
  int local_10;
  
  cVar2 = (**(code **)(*DAT_0162ee80 + 0x168))();
  if (cVar2 == '\0') {
    uVar5 = 0;
  }
  else {
    iVar3 = FUN_006352f0(param_2);
    if ((iVar3 != 0) && (DAT_00795f95 != '\0')) {
      piVar4 = (int *)(**(code **)(*param_1 + 0xe0))(param_2);
      cVar2 = (**(code **)(*piVar4 + 0x18))();
      if (cVar2 == '\0') {
        piVar4 = (int *)(**(code **)(*param_1 + 0xe0))(param_2);
        uVar5 = (**(code **)(*piVar4 + 8))();
        FUN_00635cd0(&DAT_006da5dc,uVar5);
        return 0;
      }
    }
    iVar3 = FUN_006352f0(param_2);
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*param_1 + 0xe0))(param_2);
      (**(code **)(*piVar4 + 0x2c))(local_20,param_3);
      iVar3 = FUN_00636690();
      if (iVar3 < local_14) {
        uVar5 = FUN_00630f40("SID_GENERIC_OPPONENTREQUIRED",0);
        uVar5 = FUN_00630f40("SID_GENERIC_NEEDANOTHERPLAYER",uVar5);
        FUN_0062ff10(uVar5);
        (**(code **)(*DAT_0162ee80 + 0x16c))(0,0,param_2,param_3,0);
        return 0;
      }
      iVar3 = FUN_00636690();
      if (local_10 < iVar3) {
        local_28 = 0;
        local_24 = 0;
        while ((iVar3 = (**(code **)(*param_1 + 0x10c))(), local_24 < iVar3 && (local_28 < local_10)
               )) {
          piVar4 = (int *)FUN_0063aac0();
          if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            local_28 = local_28 + 1;
          }
          local_24 = local_24 + 1;
        }
        for (; iVar3 = (**(code **)(*param_1 + 0x10c))(), local_24 < iVar3; local_24 = local_24 + 1)
        {
          FUN_0063a3e0(local_24,0);
        }
      }
    }
    iVar3 = (**(code **)(*param_1 + 0xe0))(param_2);
    if (iVar3 != 0) {
      piVar4 = (int *)(**(code **)(*param_1 + 0xe0))(param_2);
      (**(code **)(*piVar4 + 0x84))(param_2,param_3);
    }
    (**(code **)(*param_1 + 0x34))(param_2);
    uVar5 = 1;
  }
  return uVar5;
}

