// FUN_006844b0  006844b0

int FUN_006844b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined1 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_EDX;
  int iVar3;
  longlong lVar4;
  undefined1 local_30 [16];
  undefined1 local_20 [32];
  
  if (param_5 == (undefined1 *)0x0) {
    lVar4 = FUN_006845f0(param_1,local_30,0x2134,0);
    if (lVar4 == -0x80) {
      return -0x80;
    }
    if (((int)((ulonglong)lVar4 >> 0x20) < 1) && (lVar4 < 0)) {
      return -0x84;
    }
    param_5 = local_30;
  }
  uVar1 = FUN_006862e0(param_5);
  FUN_00686aa0(param_1 + 0x78,uVar1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x1c8);
  }
  *(undefined4 *)(param_1 + 0x58) = 3;
  FUN_006906e0(param_2);
  FUN_00690650(param_3);
  iVar3 = 0;
LAB_00684548:
  FUN_00686760(param_1 + 0x78,param_5);
  if (iVar3 < 3) {
    while (iVar2 = FUN_00686ac0(param_1 + 0x78,local_20), iVar2 != 0) {
      if (iVar2 == -1) goto LAB_006845be;
      iVar2 = FUN_00690880(param_2,param_3,local_20);
      if (iVar2 != 0) goto LAB_006845c3;
      iVar3 = iVar3 + 1;
      if (2 < iVar3) {
        return 0;
      }
    }
    if (iVar3 < 3) goto code_r0x006845a3;
  }
  return 0;
code_r0x006845a3:
  FUN_006845f0(param_1,param_5,0x2134,0);
  if (extraout_EDX < 0) {
LAB_006845be:
    iVar2 = -0x85;
LAB_006845c3:
    FUN_00690710(param_2);
    FUN_00690670(param_3);
    *(undefined4 *)(param_1 + 0x58) = 2;
    return iVar2;
  }
  goto LAB_00684548;
}

