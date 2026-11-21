// FUN_00623950  00623950

void FUN_00623950(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *local_14;
  int local_10;
  uint local_c;
  
  for (local_10 = param_1[1]; local_10 < param_1[3]; local_10 = local_10 + 1) {
    iVar3 = FUN_006238d0(local_10);
    iVar4 = FUN_00623930();
    iVar1 = *param_1;
    iVar5 = FUN_006238d0(local_10);
    iVar6 = FUN_00623930();
    iVar2 = param_1[2];
    for (local_14 = (undefined4 *)(iVar3 + iVar4 * iVar1);
        local_14 < (undefined4 *)(iVar5 + iVar6 * iVar2); local_14 = local_14 + 1) {
      local_c = FUN_00617a70(*local_14);
      local_c = local_c & 0xffffff;
      uVar7 = FUN_00617b30(local_c);
      *local_14 = uVar7;
    }
  }
  return;
}

