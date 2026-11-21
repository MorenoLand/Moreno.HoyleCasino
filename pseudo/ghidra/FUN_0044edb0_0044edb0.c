// FUN_0044edb0  0044edb0

int FUN_0044edb0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 local_34 [8];
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_005dcb00(param_1);
  local_14 = FUN_005d5a50();
  local_20 = (**(code **)(*DAT_00790734 + 0x2b0))();
  local_c = (**(code **)(*DAT_00790734 + 0x2b4))();
  local_8 = FUN_005da8a0();
  local_24 = FUN_005dac90();
  local_18 = FUN_005da8c0();
  piVar2 = (int *)FUN_005daa20(local_34);
  local_1c = *piVar2;
  iVar3 = FUN_005dcb00(param_1);
  local_28 = *(undefined4 *)(iVar3 + 0x4a8);
  local_2c = 0;
  if (local_14 < local_c) {
    local_10 = local_14;
  }
  else {
    local_10 = local_c;
  }
  if (local_8 - local_18 < 4) {
    if (local_8 == local_18) {
      if ((local_14 < local_1c) && (local_1c - local_14 <= local_10)) {
        local_2c = (local_1c - local_14) + local_20;
      }
    }
    else if (local_14 < local_1c) {
      if (local_10 < local_1c - local_14) {
        cVar1 = FUN_0044ed20(param_1);
        if (cVar1 != '\0') {
          iVar3 = FUN_0062fbf0(3);
          local_2c = local_10 / (iVar3 + 1);
        }
      }
      else {
        iVar4 = local_1c - local_14;
        iVar3 = FUN_0062fbf0(5);
        local_2c = iVar4 / (iVar3 + 1);
      }
    }
    for (; local_2c % 5 != 0; local_2c = local_2c + 1) {
    }
    if (local_2c != 0) {
      return local_2c;
    }
  }
  FUN_0062fbf0(5);
  FUN_0044e970(param_1);
  FUN_0062fbf0(5);
  FUN_0044e970(param_1);
  FUN_0062fbf0(5);
  iVar3 = FUN_00686cc0();
  return iVar3;
}

