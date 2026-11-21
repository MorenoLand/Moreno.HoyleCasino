// FUN_005c5670  005c5670

/* WARNING: Removing unreachable block (ram,0x005c571e) */
/* WARNING: Removing unreachable block (ram,0x005c57e8) */

void __thiscall
FUN_005c5670(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uStack_27c;
  int local_264;
  int local_260;
  uint local_25c;
  int local_254;
  int local_250;
  uint local_248;
  int local_238;
  undefined1 local_1e8;
  undefined1 local_1e7;
  undefined1 local_16f;
  undefined1 local_cf;
  uint local_4c;
  undefined1 local_48 [52];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a8718;
  local_10 = ExceptionList;
  uStack_27c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_27c;
  ExceptionList = &local_10;
  FUN_005c38f0(param_5);
  local_8 = 0;
  if (*(int *)(param_1 + 4) == 0) {
    local_248 = 0;
  }
  else {
    local_248 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 4)) / 0x34;
  }
  if (param_4 == 0) {
    FUN_005c5f9e();
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    local_250 = 0;
  }
  else {
    local_250 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
  }
  if (param_4 <= 0x4ec4ec4U - local_250) {
    if (*(int *)(param_1 + 4) == 0) {
      local_254 = 0;
    }
    else {
      local_254 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
    }
    if (local_254 + param_4 <= local_248) {
      if (param_4 <= (uint)((*(int *)(param_1 + 8) - param_3) / 0x34)) {
        iVar1 = *(int *)(param_1 + 8);
        uVar2 = FUN_005c69f0(iVar1 + param_4 * -0x34,iVar1,*(undefined4 *)(param_1 + 8),param_1);
        *(undefined4 *)(param_1 + 8) = uVar2;
        uVar3 = iVar1 + param_4 * -0x34;
        FUN_005c6a70(param_3,uVar3,iVar1,local_1e7,CONCAT31((int3)(uVar3 >> 8),local_1e8),
                     uVar3 & 0xffffff00);
        for (local_238 = param_3; local_238 != param_4 * 0x34 + param_3;
            local_238 = local_238 + 0x34) {
          FUN_005c3a20(local_48);
        }
        local_8 = 0xffffffff;
        FUN_005c3980();
        ExceptionList = local_10;
        return;
      }
      FUN_005c69f0(param_3,*(undefined4 *)(param_1 + 8),param_4 * 0x34 + param_3,param_1);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_005c6b00(*(uint *)(param_1 + 8),param_4 - (*(int *)(param_1 + 8) - param_3) / 0x34,
                   local_48,param_1,local_16f,*(uint *)(param_1 + 8) & 0xffffff00);
      FUN_005c5de7();
      return;
    }
    if (0x4ec4ec4 - (local_248 >> 1) < local_248) {
      local_25c = 0;
    }
    else {
      local_25c = (local_248 >> 1) + local_248;
    }
    local_4c = local_25c;
    if (*(int *)(param_1 + 4) == 0) {
      local_260 = 0;
    }
    else {
      local_260 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
    }
    if (local_25c < local_260 + param_4) {
      if (*(int *)(param_1 + 4) == 0) {
        local_264 = 0;
      }
      else {
        local_264 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34;
      }
      local_4c = local_264 + param_4;
    }
    uVar2 = FUN_005c6370(local_4c,0);
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar3 = FUN_005c6c00(*(undefined4 *)(param_1 + 4),param_3,uVar2,param_1);
    FUN_005c6b00(uVar3,param_4,local_48,param_1,local_cf,uVar3 & 0xffffff00);
    FUN_005c6c00(param_3,*(undefined4 *)(param_1 + 8),param_4 * 0x34 + uVar3,param_1);
    FUN_005c5af9();
    return;
  }
  FUN_005c60c0();
  FUN_005c5f9e();
  return;
}

