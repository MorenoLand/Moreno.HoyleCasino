// FUN_005d5af0  005d5af0

void __thiscall FUN_005d5af0(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 local_1c [8];
  undefined8 local_14;
  undefined1 local_c [8];
  
  puVar3 = (undefined4 *)FUN_005d52e0();
  *puVar3 = param_2;
  puVar3[1] = param_3;
  if (*(int *)(param_1 + 4) != -1) {
    FUN_005de200(*(undefined4 *)(param_1 + 4));
  }
  piVar4 = (int *)FUN_0063aac0();
  if (*piVar4 == 2) {
LAB_005d5b56:
    bVar1 = true;
  }
  else {
    piVar4 = (int *)FUN_0063aac0();
    if (*piVar4 == 3) goto LAB_005d5b56;
    bVar1 = false;
  }
  if (bVar1) {
    cVar2 = FUN_005da830();
    if (cVar2 == '\0') {
      cVar2 = FUN_005d6c60();
      if (cVar2 != '\0') {
        if (*(char *)(param_1 + 0x4b1) == '\0') {
          cVar2 = FUN_005d6e70();
          if (cVar2 != '\0') {
            FUN_005d6ee0(0);
            iVar5 = FUN_0063aac0();
            FUN_005dc520(iVar5 + 4);
          }
        }
        cVar2 = FUN_005d6f90();
        if (cVar2 != '\0') {
          FUN_005dc3e0(param_1);
        }
      }
    }
  }
  cVar2 = FUN_005da7b0();
  local_14 = CONCAT44(local_14._4_4_,(undefined4)local_14);
  if (cVar2 != '\0') {
    piVar4 = (int *)FUN_0063aac0();
    if (*piVar4 == 2) {
LAB_005d5c31:
      bVar1 = true;
    }
    else {
      piVar4 = (int *)FUN_0063aac0();
      if (*piVar4 == 3) goto LAB_005d5c31;
      bVar1 = false;
    }
    local_14 = CONCAT44(local_14._4_4_,(undefined4)local_14);
    if ((bVar1) &&
       (local_14 = CONCAT44(local_14._4_4_,(undefined4)local_14),
       *(char *)(DAT_007947e0 + 0x4f05) == '\0')) {
      uVar6 = FUN_005da880(0);
      uVar7 = FUN_0064c8a0(uVar6);
      puVar8 = local_1c;
      local_14 = uVar7;
      FUN_005d5a90(local_c);
      puVar3 = (undefined4 *)FUN_0064c630(puVar8,uVar7);
      uVar6 = puVar3[1];
      *(undefined4 *)(param_1 + 0x4d4) = *puVar3;
      *(undefined4 *)(param_1 + 0x4d8) = uVar6;
    }
  }
  piVar4 = (int *)FUN_0063aac0();
  if (*piVar4 != 2) {
    piVar4 = (int *)FUN_0063aac0();
    if (*piVar4 != 3) {
      bVar1 = false;
      goto LAB_005d5cd5;
    }
  }
  bVar1 = true;
LAB_005d5cd5:
  if (bVar1) {
    FUN_0063b0a0();
  }
  return;
}

