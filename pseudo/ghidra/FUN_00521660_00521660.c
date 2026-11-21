// FUN_00521660  00521660

int FUN_00521660(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int local_44;
  int local_34;
  undefined1 local_28 [8];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;
  
  local_c = (int *)FUN_00528000();
  local_1c = 0;
  local_18 = (**(code **)(*DAT_00793370 + 0x2b0))();
  local_10 = (**(code **)(*DAT_00793370 + 0x2b4))();
  local_20 = local_c[0x12a];
  piVar2 = (int *)FUN_005d5a90(local_28);
  local_14 = *piVar2;
  local_8 = (**(code **)(*local_c + 0x18))();
  if (local_14 < local_10) {
    local_34 = local_14;
  }
  else {
    local_34 = local_10;
  }
  local_10 = local_34;
  local_1c = local_18;
  if (local_14 < local_18) {
    local_18 = 0;
  }
  else {
    uVar3 = FUN_00521900(param_1);
    switch(uVar3) {
    case 1:
    case 6:
    case 7:
      iVar5 = local_18 * local_8;
      iVar4 = FUN_0062fbf0(10);
      local_1c = iVar5 / (iVar4 + 1) + local_18;
      break;
    case 8:
    case 9:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      iVar4 = FUN_0062fbf0(5);
      iVar5 = (iVar4 * local_18 + local_18) * local_8;
      iVar4 = FUN_0062fbf0(5);
      local_1c = iVar5 / (iVar4 + 1) + local_20 * local_18 * local_8;
      break;
    case 10:
      iVar5 = local_18 * local_8;
      iVar4 = FUN_0062fbf0(10);
      local_1c = (iVar5 / (iVar4 + 1) + local_18) * 3;
      break;
    case 0xb:
      iVar5 = local_18 * local_8;
      iVar4 = FUN_0062fbf0(10);
      local_1c = (iVar5 / (iVar4 + 1) + local_18) * 4;
    }
    cVar1 = FUN_005283e0();
    if (cVar1 != '\0') {
      iVar4 = FUN_0062fbf0(10);
      local_1c = (iVar4 + 1) * local_1c;
    }
    cVar1 = FUN_00528420();
    if ((cVar1 != '\0') &&
       (cVar1 = FUN_00528470(*(undefined4 *)(DAT_00793374 + 0xd38)), cVar1 != '\0')) {
      (**(code **)(*local_c + 0x1c))();
      iVar4 = FUN_00686cc0();
      if (local_10 < iVar4) {
        local_44 = local_10;
      }
      else {
        (**(code **)(*local_c + 0x1c))();
        local_44 = FUN_00686cc0();
      }
      local_1c = local_44;
    }
    if ((local_18 <= local_1c) && (local_18 = local_10, local_1c < local_10)) {
      local_18 = local_1c;
    }
  }
  return local_18;
}

