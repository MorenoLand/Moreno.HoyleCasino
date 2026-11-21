// FUN_00627de0  00627de0

void FUN_00627de0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_var;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  cVar1 = FUN_005f54c0();
  if (cVar1 == '\0') {
    iVar4 = extraout_var;
    cVar1 = FUN_00627400();
    if ((cVar1 == '\0') && (cVar1 = FUN_00627440(), cVar1 == '\0')) {
      FUN_00627760(param_1);
    }
    else {
      cVar1 = FUN_006277f0(param_1,&local_1c,&local_10);
      if (cVar1 != '\0') {
        cVar1 = FUN_00627400();
        if (cVar1 != '\0') {
          for (local_14 = local_18; local_14 <= local_c; local_14 = local_14 + 1) {
            iVar3 = local_1c - *(int *)(iVar4 + 100) / 2;
            for (local_8 = 0; local_8 < *(int *)(iVar4 + 100); local_8 = local_8 + 1) {
              uVar2 = FUN_006276c0(iVar4,iVar3);
              FUN_005f9330(iVar3,local_14,*(undefined4 *)(*(int *)(iVar4 + 0x60) + local_8 * 4),
                           uVar2);
              iVar3 = iVar3 + 1;
            }
          }
        }
        cVar1 = FUN_00627440();
        if (cVar1 != '\0') {
          for (local_14 = local_1c; local_14 <= local_10; local_14 = local_14 + 1) {
            iVar3 = local_18 - *(int *)(iVar4 + 100) / 2;
            for (local_8 = 0; local_8 < *(int *)(iVar4 + 100); local_8 = local_8 + 1) {
              uVar2 = FUN_006276c0(iVar4,iVar3);
              FUN_005f9330(local_14,iVar3,*(undefined4 *)(*(int *)(iVar4 + 0x60) + local_8 * 4),
                           uVar2);
              iVar3 = iVar3 + 1;
            }
          }
        }
      }
    }
  }
  return;
}

