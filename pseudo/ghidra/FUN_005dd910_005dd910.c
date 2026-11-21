// FUN_005dd910  005dd910

void __fastcall FUN_005dd910(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int local_18;
  undefined8 local_14;
  int local_c;
  undefined4 local_8;
  
  local_14 = FUN_0064c8a0(0,0);
  local_8 = 0;
  if (DAT_0162ee80 != (int *)0x0) {
    cVar2 = (**(code **)(*DAT_0162ee80 + 0x80))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x33c))(0xffffffff);
      if (cVar2 != '\0') {
        *(undefined1 *)((int)param_1 + 0x4f05) = 1;
        FUN_005de170();
        *(undefined1 *)((int)param_1 + 0x4f05) = 0;
      }
    }
  }
  local_c = 0;
  while( true ) {
    iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar3 <= local_c) break;
    FUN_005dcb00(local_c);
    piVar4 = (int *)FUN_0063aac0();
    if (*piVar4 == 2) {
LAB_005dda08:
      bVar1 = true;
    }
    else {
      piVar4 = (int *)FUN_0063aac0();
      if (*piVar4 == 3) goto LAB_005dda08;
      bVar1 = false;
    }
    local_18 = local_c;
    if (bVar1) {
      do {
        local_18 = local_18 + -1;
        if (local_18 < 0) goto LAB_005dd9a2;
        FUN_005dcb00(local_18);
        iVar3 = FUN_0063aac0();
        FUN_005dcb00(local_c);
        iVar5 = FUN_0063aac0();
        iVar3 = strcmp((char *)(iVar5 + 4),(char *)(iVar3 + 4));
      } while (iVar3 != 0);
      uVar7 = 0;
      iVar3 = local_c;
      FUN_005dcb00(local_c,local_c,0);
      FUN_0063a3e0(iVar3,uVar7);
    }
LAB_005dd9a2:
    local_c = local_c + 1;
  }
  local_c = 0;
  do {
    iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))();
    if (iVar3 <= local_c) {
      FUN_00636250();
      local_c = 0;
      while( true ) {
        iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))();
        if (iVar3 <= local_c) break;
        iVar3 = FUN_005dcb00(local_c);
        if (*(undefined4 **)(iVar3 + 0x49c) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar3 + 0x49c))(1);
        }
        iVar3 = FUN_005dcb00(local_c);
        *(undefined4 *)(iVar3 + 0x49c) = 0;
        piVar4 = (int *)FUN_005dcb00(local_c);
        (**(code **)(*piVar4 + 0x10))();
        piVar4 = (int *)FUN_005dcb00(local_c);
        (**(code **)(*piVar4 + 0x14))();
        local_c = local_c + 1;
      }
      return;
    }
    local_8 = FUN_005dcb00(local_c);
    cVar2 = (**(code **)(*param_1 + 0x33c))(0xffffffff);
    if (cVar2 != '\0') {
      FUN_005dcb00(local_c);
      piVar4 = (int *)FUN_0063aac0();
      if (*piVar4 == 2) {
LAB_005ddb40:
        bVar1 = true;
      }
      else {
        piVar4 = (int *)FUN_0063aac0();
        if (*piVar4 == 3) goto LAB_005ddb40;
        bVar1 = false;
      }
      if (bVar1) {
        cVar2 = (**(code **)(*DAT_0162ee80 + 0x80))();
        if (cVar2 == '\0') {
          iVar3 = FUN_005dcb00(local_c);
          if (*(char *)(iVar3 + 0x4a2) == '\0') {
            uVar6 = FUN_0064c8a0(0,0);
            local_14 = uVar6;
            (**(code **)(*DAT_007947e4 + 0x27c))(local_c,&local_14);
            iVar3 = -(int)local_14;
            iVar5 = -local_14._4_4_;
            local_14._0_4_ = iVar3;
            local_14._4_4_ = iVar5;
            FUN_005dcb00(local_c,iVar3,iVar5);
            FUN_005d5fb0(iVar3,iVar5);
          }
        }
        cVar2 = FUN_005da7b0();
        if (cVar2 == '\0') {
          (**(code **)(*DAT_007947e4 + 0x29c))(local_c);
        }
        else {
          (**(code **)(*DAT_007947e4 + 0x298))(local_c);
        }
      }
    }
    local_c = local_c + 1;
  } while( true );
}

