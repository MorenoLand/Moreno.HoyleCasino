// FUN_00434c40  00434c40

void __fastcall FUN_00434c40(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  char *_Format;
  undefined4 uVar5;
  int local_74 [4];
  char local_64 [80];
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_74[0] = 0;
  local_74[1] = 3;
  local_74[2] = 2;
  local_74[3] = 1;
  local_c = 0;
  local_8 = 0;
  if (*(char *)(param_1 + 0xac0) == '\0') {
    *(undefined4 *)(param_1 + 0xabc) = 0;
    cVar2 = FUN_004343d0();
    if (cVar2 == '\0') {
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        if ((local_74[local_10] == *(int *)(param_1 + 0xab8)) &&
           (local_c = local_10 + 1, 3 < local_10 + 1)) {
          local_c = 0;
        }
      }
      for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
        FUN_005dcb00(local_74[local_c]);
        piVar3 = (int *)FUN_0063aac0();
        if (*piVar3 != 0) {
          local_8 = local_8 + 1;
          FUN_005dcb00(local_74[local_c]);
          piVar3 = (int *)FUN_0063aac0();
          if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            if (*(char *)(DAT_0162ee84 + 0x25) == '\0') {
              FUN_005dcb00(local_74[local_c]);
              iVar4 = FUN_0063aac0();
              _Format = (char *)FUN_00630f40("SID_CRAPS_ROLLDICE_FORMAT",iVar4 + 4);
              sprintf(local_64,_Format);
              uVar5 = FUN_00630f40("SID_CRAPS_PICKINGSHOOTER",4);
              iVar4 = FUN_0062ff10(local_64,uVar5);
              if (iVar4 == 6) {
                FUN_00434c20(local_74[local_c]);
                *(int *)(param_1 + 0xab8) = local_74[local_c];
                *(undefined1 *)(param_1 + 0xac0) = 1;
                goto LAB_00434f7d;
              }
            }
          }
          else {
            cVar2 = FUN_00435040(local_74[local_c]);
            if (cVar2 != '\0') {
              FUN_00434c20(local_74[local_c]);
              *(int *)(param_1 + 0xab8) = local_74[local_c];
              *(undefined1 *)(param_1 + 0xac0) = 1;
              goto LAB_00434f7d;
            }
          }
        }
        iVar4 = FUN_00636610();
        if (local_8 == iVar4) {
          FUN_00434c20(0xffffffff);
          *(undefined1 *)(param_1 + 0xac0) = 1;
          goto LAB_00434f7d;
        }
        local_c = local_c + 1;
        if (3 < local_c) {
          local_c = 0;
        }
      }
      FUN_00434c20(0xffffffff);
    }
    else {
      FUN_00434c20(0xffffffff);
      *(undefined1 *)(param_1 + 0xac0) = 1;
    }
  }
LAB_00434f7d:
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

