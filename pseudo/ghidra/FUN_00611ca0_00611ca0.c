// FUN_00611ca0  00611ca0

/* WARNING: Removing unreachable block (ram,0x00611d4e) */
/* WARNING: Removing unreachable block (ram,0x00611e18) */

void __thiscall
FUN_00611ca0(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uStack_2d0;
  int local_2b8;
  int local_2b4;
  uint local_2b0;
  int local_2a8;
  int local_2a4;
  uint local_29c;
  int local_26c;
  undefined1 local_228;
  undefined1 local_227;
  undefined1 local_193;
  undefined1 local_e3;
  uint local_60;
  undefined1 local_5c [72];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006aaf88;
  local_10 = ExceptionList;
  uStack_2d0 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2d0;
  ExceptionList = &local_10;
  FUN_00610570(param_5);
  local_8 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    local_29c = 0;
  }
  else {
    local_29c = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x48;
  }
  if (param_4 == 0) {
    FUN_00612661();
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    local_2a4 = 0;
  }
  else {
    local_2a4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x48;
  }
  if (param_4 <= 0x38e38e3U - local_2a4) {
    if (*(int *)(param_1 + 4) == 0) {
      local_2a8 = 0;
    }
    else {
      local_2a8 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x48;
    }
    if (local_2a8 + param_4 <= local_29c) {
      if (param_4 <= (uint)((*(int *)(param_1 + 8) - param_3) / 0x48)) {
        iVar1 = *(int *)(param_1 + 8);
        uVar2 = FUN_00612a70(iVar1 + param_4 * -0x48,iVar1,*(undefined4 *)(param_1 + 8),param_1);
        *(undefined4 *)(param_1 + 8) = uVar2;
        uVar3 = iVar1 + param_4 * -0x48;
        FUN_00612af0(param_3,uVar3,iVar1,local_227,CONCAT31((int3)(uVar3 >> 8),local_228),
                     uVar3 & 0xffffff00);
        for (local_26c = param_3; local_26c != param_4 * 0x48 + param_3;
            local_26c = local_26c + 0x48) {
          FUN_00610650(local_5c);
        }
        local_8 = 0xffffffff;
        FUN_005be450();
        ExceptionList = local_10;
        return;
      }
      FUN_00612c20(param_3,*(undefined4 *)(param_1 + 8),param_4 * 0x48 + param_3,param_1);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_00612970(*(uint *)(param_1 + 8),param_4 - (*(int *)(param_1 + 8) - param_3) / 0x48,
                   local_5c,param_1,local_193,*(uint *)(param_1 + 8) & 0xffffff00);
      FUN_006124aa();
      return;
    }
    if (0x38e38e3 - (local_29c >> 1) < local_29c) {
      local_2b0 = 0;
    }
    else {
      local_2b0 = (local_29c >> 1) + local_29c;
    }
    local_60 = local_2b0;
    if (*(int *)(param_1 + 4) == 0) {
      local_2b4 = 0;
    }
    else {
      local_2b4 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x48;
    }
    if (local_2b0 < local_2b4 + param_4) {
      if (*(int *)(param_1 + 4) == 0) {
        local_2b8 = 0;
      }
      else {
        local_2b8 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x48;
      }
      local_60 = local_2b8 + param_4;
    }
    uVar2 = FUN_0068fa30(local_60,0);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar3 = FUN_00612c20(*(undefined4 *)(param_1 + 4),param_3,uVar2,param_1);
    FUN_00612970(uVar3,param_4,local_5c,param_1,local_e3,uVar3 & 0xffffff00);
    FUN_00612c20(param_3,*(undefined4 *)(param_1 + 8),param_4 * 0x48 + uVar3,param_1);
    FUN_00612138();
    return;
  }
  FUN_006126e0();
  FUN_00612661();
  return;
}

