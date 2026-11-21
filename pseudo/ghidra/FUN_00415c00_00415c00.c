// FUN_00415c00  00415c00

void FUN_00415c00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_1c [8];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  piVar3 = (int *)FUN_0063aac0();
  if ((*piVar3 == 2) || (piVar3 = (int *)FUN_0063aac0(), *piVar3 == 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((bVar1) && (cVar2 = FUN_005da830(), cVar2 == '\0')) && (*(char *)(param_1 + 0x4b1) == '\0'))
  {
    if (*(int *)(DAT_00790324 + 0x4e0) < 0) {
      puVar6 = local_c;
      uVar7 = param_3;
      uVar8 = param_4;
      FUN_00418400(param_2);
      puVar4 = (undefined4 *)FUN_0064c5c0(puVar6,uVar7,uVar8);
      uVar7 = *puVar4;
      uVar8 = puVar4[1];
      iVar5 = FUN_00418400(param_2);
      *(undefined4 *)(iVar5 + 0x20) = uVar7;
      *(undefined4 *)(iVar5 + 0x24) = uVar8;
    }
    if (*(int *)(DAT_00790324 + 0x4e0) == 0) {
      puVar6 = local_14;
      uVar7 = param_3;
      uVar8 = param_4;
      FUN_00418400(param_2);
      puVar4 = (undefined4 *)FUN_0064c5c0(puVar6,uVar7,uVar8);
      uVar7 = *puVar4;
      uVar8 = puVar4[1];
      iVar5 = FUN_00418400(param_2);
      *(undefined4 *)(iVar5 + 0x28) = uVar7;
      *(undefined4 *)(iVar5 + 0x2c) = uVar8;
    }
    if (0 < *(int *)(DAT_00790324 + 0x4e0)) {
      puVar6 = local_1c;
      FUN_00418400(param_2);
      puVar4 = (undefined4 *)FUN_0064c5c0(puVar6,param_3,param_4);
      uVar7 = *puVar4;
      uVar8 = puVar4[1];
      iVar5 = FUN_00418400(param_2);
      *(undefined4 *)(iVar5 + 0x30) = uVar7;
      *(undefined4 *)(iVar5 + 0x34) = uVar8;
    }
  }
  return;
}

