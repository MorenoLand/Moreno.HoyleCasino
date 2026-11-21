// FUN_005ddd20  005ddd20

int __fastcall FUN_005ddd20(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_2c;
  int local_28 [4];
  int local_18;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  cVar2 = FUN_005da810();
  if (cVar2 != '\0') {
    local_c = 1;
    while (iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_c < iVar3) {
      FUN_005dcb00(local_c);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        FUN_005dcb00(local_c);
        iVar3 = FUN_005d5a50();
        local_2c = local_c;
        if (iVar3 < param_1[0x13bb]) {
          uVar11 = 0;
          iVar3 = local_c;
          FUN_005dcb00(local_c,local_c,0);
          FUN_0063a3e0(iVar3,uVar11);
        }
        else {
          while (local_2c = local_2c + -1, -1 < local_2c) {
            FUN_005dcb00(local_2c);
            piVar4 = (int *)FUN_0063aac0();
            if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              FUN_005dcb00(local_2c);
              iVar3 = FUN_0063aac0();
              FUN_005dcb00(local_c);
              iVar5 = FUN_0063aac0();
              iVar3 = strcmp((char *)(iVar5 + 4),(char *)(iVar3 + 4));
              if (iVar3 == 0) {
                uVar11 = 0;
                iVar3 = local_c;
                FUN_005dcb00(local_c,local_c,0);
                FUN_0063a3e0(iVar3,uVar11);
              }
            }
          }
        }
      }
      local_c = local_c + 1;
    }
  }
  FUN_005dcb00(0);
  iVar3 = FUN_005d52e0();
  if ((((*(char *)(iVar3 + 0x5d) == '\0') && (DAT_007947e4 != (int *)0x0)) &&
      (cVar2 = (**(code **)(*DAT_007947e4 + 0x260))(), cVar2 != '\0')) &&
     (cVar2 = FUN_005da810(), cVar2 == '\0')) {
    uVar11 = FUN_005f3bf0(local_28,0);
    (**(code **)(*param_1 + 0x364))(uVar11);
    local_c = 0;
    while (iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_c < iVar3) {
      FUN_005dcb00(local_c);
      piVar4 = (int *)FUN_0063aac0();
      if ((*piVar4 == 2) || (piVar4 = (int *)FUN_0063aac0(), *piVar4 == 3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        if (local_8 == local_18) {
          uVar11 = 0;
          iVar3 = local_c;
          FUN_005dcb00(local_c,local_c,0);
          FUN_0063a3e0(iVar3,uVar11);
          FUN_005dcb00(local_c);
          puVar6 = (undefined4 *)FUN_0063aac0();
          *puVar6 = 0;
        }
        else {
          uVar10 = 1;
          uVar9 = 1;
          uVar8 = 1;
          uVar7 = 0;
          uVar11 = 0xffffffff;
          FUN_005dcb00(local_c,0xffffffff,0,1,1,1);
          FUN_0063a8d0(uVar11,uVar7,uVar8,uVar9,uVar10);
          local_8 = local_8 + 1;
        }
      }
      local_c = local_c + 1;
    }
    if ((local_8 < local_28[0]) && (local_10 != 0)) {
      local_c = 0;
      while (iVar3 = (**(code **)(*DAT_0162ee84 + 0x10c))(), local_c < iVar3) {
        piVar4 = (int *)FUN_0063aac0();
        if (*piVar4 == 1) {
          FUN_005e9f20("false","..\\Casino\\casinoshell.cpp",0x2d7);
          return local_8;
        }
        piVar4 = (int *)FUN_0063aac0();
        if (*piVar4 == 0) {
          FUN_0063a8d0(0xffffffff,0,1,1,1);
          local_8 = local_8 + 1;
        }
        if (local_8 == local_28[0]) {
          return local_8;
        }
        local_c = local_c + 1;
      }
    }
  }
  else {
    local_8 = FUN_006363e0();
  }
  return local_8;
}

