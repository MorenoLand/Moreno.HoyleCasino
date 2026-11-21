// FUN_005ba640  005ba640

/* WARNING: Removing unreachable block (ram,0x005ba6f6) */
/* WARNING: Removing unreachable block (ram,0x005ba7ab) */

void __thiscall
FUN_005ba640(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uStack_288;
  int local_270;
  int local_26c;
  uint local_268;
  int local_260;
  int local_25c;
  uint local_254;
  int local_228;
  undefined1 local_1e4;
  undefined1 local_1e3;
  undefined1 local_153;
  undefined1 local_ab;
  uint local_28;
  undefined1 local_24 [16];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7f80;
  local_10 = ExceptionList;
  uStack_288 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_288;
  ExceptionList = &local_10;
  FUN_005bbcc0();
  local_8 = 0;
  FUN_005bc040(param_5);
  local_8 = 1;
  if (*(int *)(param_1 + 4) == 0) {
    local_254 = 0;
  }
  else {
    local_254 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 4;
  }
  if (param_4 == 0) {
    FUN_005baf9d();
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    local_25c = 0;
  }
  else {
    local_25c = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
  }
  if (param_4 <= 0xfffffffU - local_25c) {
    if (*(int *)(param_1 + 4) == 0) {
      local_260 = 0;
    }
    else {
      local_260 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
    }
    if (local_260 + param_4 <= local_254) {
      if (param_4 <= (uint)(*(int *)(param_1 + 8) - param_3 >> 4)) {
        iVar1 = *(int *)(param_1 + 8);
        uVar2 = FUN_005bbe20(iVar1 + param_4 * -0x10,iVar1,*(undefined4 *)(param_1 + 8),param_1);
        *(undefined4 *)(param_1 + 8) = uVar2;
        uVar3 = iVar1 + param_4 * -0x10;
        FUN_005bbea0(param_3,uVar3,iVar1,local_1e3,CONCAT31((int3)(uVar3 >> 8),local_1e4),
                     uVar3 & 0xffffff00);
        for (local_228 = param_3; local_228 != param_4 * 0x10 + param_3;
            local_228 = local_228 + 0x10) {
          FUN_005bc040(local_24);
        }
        local_8 = 0xffffffff;
        FUN_005be450();
        ExceptionList = local_10;
        return;
      }
      FUN_005bc5d0(param_3,*(undefined4 *)(param_1 + 8),param_4 * 0x10 + param_3,param_1);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_005bbf70(*(uint *)(param_1 + 8),param_4 - (*(int *)(param_1 + 8) - param_3 >> 4),local_24,
                   param_1,local_153,*(uint *)(param_1 + 8) & 0xffffff00);
      FUN_005bade6();
      return;
    }
    if (0xfffffff - (local_254 >> 1) < local_254) {
      local_268 = 0;
    }
    else {
      local_268 = (local_254 >> 1) + local_254;
    }
    local_28 = local_268;
    if (*(int *)(param_1 + 4) == 0) {
      local_26c = 0;
    }
    else {
      local_26c = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
    }
    if (local_268 < local_26c + param_4) {
      if (*(int *)(param_1 + 4) == 0) {
        local_270 = 0;
      }
      else {
        local_270 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 4;
      }
      local_28 = local_270 + param_4;
    }
    uVar2 = FUN_005bbbd0(local_28,0);
    local_8 = CONCAT31(local_8._1_3_,2);
    uVar3 = FUN_005bc5d0(*(undefined4 *)(param_1 + 4),param_3,uVar2,param_1);
    FUN_005bbf70(uVar3,param_4,local_24,param_1,local_ab,uVar3 & 0xffffff00);
    FUN_005bc5d0(param_3,*(undefined4 *)(param_1 + 8),param_4 * 0x10 + uVar3,param_1);
    FUN_005baaa6();
    return;
  }
  FUN_005bb750();
  FUN_005baf9d();
  return;
}

