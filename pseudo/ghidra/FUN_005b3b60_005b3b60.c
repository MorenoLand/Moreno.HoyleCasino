// FUN_005b3b60  005b3b60

void __thiscall FUN_005b3b60(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_c [8];
  
  piVar1 = (int *)FUN_005cb880(local_c,param_2);
  if (*piVar1 < 1) goto LAB_005b3cc1;
  uVar2 = FUN_005b5c60(param_2,0,0);
  iVar3 = FUN_00641290(uVar2);
  uVar2 = FUN_005b5c60(param_2,0,1);
  iVar4 = FUN_00641290(uVar2);
  if (iVar3 != iVar4) {
    FUN_005b8ab0(param_2,0,0,0,1);
    *(undefined4 *)(param_1 + 0x664 + param_2 * 4) = 0;
    goto LAB_005b3cc1;
  }
  uVar2 = FUN_005b5c60(param_2,0,0);
  iVar3 = FUN_00641280(uVar2);
  if (iVar3 == 0xc) {
    uVar2 = FUN_005b5c60(param_2,0,1);
    iVar3 = FUN_00641280(uVar2);
    if (iVar3 != 0xd) goto LAB_005b3c05;
LAB_005b3c41:
    FUN_005b8ab0(param_2,0,1,0x19,1);
  }
  else {
LAB_005b3c05:
    uVar2 = FUN_005b5c60(param_2,0,0);
    iVar3 = FUN_00641280(uVar2);
    if (iVar3 == 0xd) {
      uVar2 = FUN_005b5c60(param_2,0,1);
      iVar3 = FUN_00641280(uVar2);
      if (iVar3 == 0xc) goto LAB_005b3c41;
    }
    FUN_005b8ab0(param_2,0,1,5,2);
  }
  *(undefined4 *)(param_1 + 0x664 + param_2 * 4) = 1;
LAB_005b3cc1:
  *(undefined1 *)(param_1 + param_2 + 0x674) = 1;
  return;
}

