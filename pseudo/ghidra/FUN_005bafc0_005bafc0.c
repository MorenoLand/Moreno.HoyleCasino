// FUN_005bafc0  005bafc0

/* WARNING: Removing unreachable block (ram,0x005bb05c) */
/* WARNING: Removing unreachable block (ram,0x005bb111) */

void __thiscall
FUN_005bafc0(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uStack_244;
  int local_22c;
  int local_228;
  uint local_224;
  int local_21c;
  int local_218;
  uint local_210;
  undefined4 *local_200;
  uint local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a7fa0;
  local_10 = ExceptionList;
  uStack_244 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_244;
  ExceptionList = &local_10;
  local_18 = *param_5;
  if (*(int *)(param_1 + 4) == 0) {
    local_210 = 0;
  }
  else {
    local_210 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
  }
  if (param_4 == 0) {
    local_14 = (undefined1 *)&uStack_244;
    FUN_005bb731();
    return;
  }
  if (*(int *)(param_1 + 4) == 0) {
    local_218 = 0;
  }
  else {
    local_218 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  }
  if (param_4 <= 0x3fffffffU - local_218) {
    if (*(int *)(param_1 + 4) == 0) {
      local_21c = 0;
    }
    else {
      local_21c = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
    }
    if (local_21c + param_4 <= local_210) {
      if (param_4 <= (uint)(*(int *)(param_1 + 8) - (int)param_3 >> 2)) {
        iVar2 = *(int *)(param_1 + 8);
        uVar1 = FUN_005bf010(iVar2 + param_4 * -4,iVar2,*(undefined4 *)(param_1 + 8),param_1);
        *(undefined4 *)(param_1 + 8) = uVar1;
        FUN_005c61d0(param_3,iVar2 + param_4 * -4,iVar2);
        for (local_200 = param_3; local_200 != param_3 + param_4; local_200 = local_200 + 1) {
          *local_200 = local_18;
        }
        ExceptionList = local_10;
        return;
      }
      local_14 = (undefined1 *)&uStack_244;
      FUN_005befc0(param_3,*(undefined4 *)(param_1 + 8),param_3 + param_4,param_1);
      local_8 = 2;
      FUN_005c5fd0(*(undefined4 *)(param_1 + 8),
                   param_4 - (*(int *)(param_1 + 8) - (int)param_3 >> 2),&local_18);
      FUN_005bb57f();
      return;
    }
    if (0x3fffffff - (local_210 >> 1) < local_210) {
      local_224 = 0;
    }
    else {
      local_224 = (local_210 >> 1) + local_210;
    }
    local_1c = local_224;
    if (*(int *)(param_1 + 4) == 0) {
      local_228 = 0;
    }
    else {
      local_228 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
    }
    if (local_224 < local_228 + param_4) {
      if (*(int *)(param_1 + 4) == 0) {
        local_22c = 0;
      }
      else {
        local_22c = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
      }
      local_1c = local_22c + param_4;
    }
    local_14 = (undefined1 *)&uStack_244;
    uVar1 = FUN_005c6310(local_1c,0);
    local_8 = 0;
    iVar2 = FUN_005bf010(*(undefined4 *)(param_1 + 4),param_3,uVar1,param_1);
    FUN_005c0910(iVar2,param_4,&local_18);
    FUN_005bf010(param_3,*(undefined4 *)(param_1 + 8),iVar2 + param_4 * 4,param_1);
    FUN_005bb3a9();
    return;
  }
  local_14 = (undefined1 *)&uStack_244;
  FUN_005bb8f0();
  FUN_005bb731();
  return;
}

