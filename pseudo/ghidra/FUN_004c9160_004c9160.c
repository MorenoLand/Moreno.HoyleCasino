// FUN_004c9160  004c9160

void __fastcall FUN_004c9160(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int *piVar8;
  int local_14;
  short local_10;
  short local_c [2];
  int local_8;
  
  cVar1 = FUN_005da7b0();
  if (cVar1 == '\0') {
    *(undefined2 *)(param_1 + 100) = 0;
  }
  else {
    piVar8 = &local_14;
    psVar7 = local_c;
    uVar2 = FUN_004c70d0(psVar7,piVar8);
    FUN_00483a70(uVar2,psVar7,piVar8);
    local_8 = FUN_0047bd20();
    local_8 = local_14 / local_8;
    local_10 = FUN_005da8a0();
    local_10 = local_10 - (short)*(undefined4 *)(DAT_00791eb8 + 0x98);
    if (local_10 < 1) {
      local_10 = 1;
    }
    if (local_c[0] == 1) {
      iVar6 = -local_8;
      iVar3 = (int)local_10;
      iVar4 = FUN_0062fbf0(5);
      iVar5 = FUN_0062fbf0(5);
      if (iVar4 + iVar5 < iVar6 / (iVar3 / 2 + 1)) {
        *(undefined2 *)(param_1 + 100) = 1;
      }
      else {
        *(undefined2 *)(param_1 + 100) = 0;
      }
    }
    else {
      iVar3 = local_8 / ((int)local_10 / 2 + 1);
      iVar4 = FUN_0062fbf0(7);
      iVar5 = FUN_0062fbf0(5);
      if (iVar4 + iVar5 < iVar3) {
        iVar3 = FUN_0062fbf0(3);
        if (iVar3 == 0) {
          *(undefined2 *)(param_1 + 100) = 2;
        }
        else {
          *(undefined2 *)(param_1 + 100) = 3;
        }
      }
      else {
        iVar3 = local_8 / ((int)local_10 / 2 + 1);
        iVar4 = FUN_0062fbf0(3);
        iVar5 = FUN_0062fbf0(3);
        if (iVar4 + iVar5 < iVar3) {
          iVar3 = FUN_0062fbf0(3);
          if (iVar3 == 0) {
            *(undefined2 *)(param_1 + 100) = 0;
          }
          else {
            *(undefined2 *)(param_1 + 100) = 2;
          }
        }
        else {
          *(undefined2 *)(param_1 + 100) = 0;
        }
      }
    }
  }
  return;
}

