// FUN_00436570  00436570

uint __thiscall FUN_00436570(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 local_14 [8];
  uint local_c;
  uint local_8;
  
  puVar1 = (uint *)FUN_0043bd30(local_14,param_2);
  local_8 = *puVar1;
  iVar2 = FUN_00434310();
  local_c = iVar2 * local_8;
  uVar3 = FUN_005f5400();
  switch(uVar3) {
  case 1:
    iVar2 = FUN_00434310();
    if (iVar2 < 3) {
      switch(*(undefined4 *)(param_1 + 0xac4)) {
      case 5:
      case 9:
        iVar2 = FUN_00434310();
        if (iVar2 == 1) {
          if (local_c == 5) {
            local_c = 6;
          }
          else {
            for (; (int)local_c % 10 != 0; local_c = local_c + 1) {
            }
          }
        }
        break;
      case 6:
      case 8:
        iVar2 = FUN_00434310();
        if (iVar2 == 1) {
          if ((int)local_8 % 3 == 0) {
            local_c = ((int)local_8 / 3) * 5;
          }
          else {
            for (; (int)local_c % 5 != 0; local_c = local_c + 1) {
            }
          }
        }
        iVar2 = FUN_00434310();
        if (iVar2 == 2) {
          uVar4 = local_8 & 0x80000001;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
          }
          if (uVar4 == 0) {
            local_c = (int)local_8 / 2 + local_8 * 2;
          }
          else {
            for (; (int)local_c % 5 != 0; local_c = local_c + 1) {
            }
          }
        }
      }
    }
    break;
  case 3:
    switch(*(undefined4 *)(param_1 + 0xac4)) {
    case 4:
    case 10:
      local_c = local_c << 1;
      break;
    case 5:
    case 9:
      uVar4 = local_c & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      if ((uVar4 != 0) && (iVar2 = FUN_00434310(), iVar2 < 3)) {
        local_c = local_c + 1;
      }
      local_c = (int)(local_c * 3) / 2;
      break;
    case 6:
    case 8:
      if (((int)local_c % 5 != 0) && (iVar2 = FUN_00434310(), iVar2 < 3)) {
        local_c = (5 - (int)local_c % 5) + local_c;
      }
      local_c = (int)(local_c * 6) / 5;
    }
    break;
  case 0x1a:
  case 0x1d:
    iVar2 = FUN_00434310();
    if (iVar2 == 1) {
      if (local_c == 5) {
        local_c = 6;
      }
      else {
        for (; (int)local_c % 10 != 0; local_c = local_c + 1) {
        }
      }
    }
    break;
  case 0x1b:
  case 0x1c:
    iVar2 = FUN_00434310();
    if (iVar2 == 1) {
      if ((int)local_8 % 3 == 0) {
        local_c = ((int)local_8 / 3) * 5;
      }
      else {
        for (; (int)local_c % 5 != 0; local_c = local_c + 1) {
        }
      }
    }
    iVar2 = FUN_00434310();
    if (iVar2 == 2) {
      uVar4 = local_8 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 == 0) {
        local_c = (int)local_8 / 2 + local_8 * 2;
      }
      else {
        for (; (int)local_c % 5 != 0; local_c = local_c + 1) {
        }
      }
    }
    break;
  case 0x25:
  case 0x2a:
    local_c = local_c << 1;
    break;
  case 0x26:
  case 0x29:
    uVar4 = local_c & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    if ((uVar4 != 0) && (iVar2 = FUN_00434310(), iVar2 < 3)) {
      local_c = local_c + 1;
    }
    local_c = (int)(local_c * 3) / 2;
    break;
  case 0x27:
  case 0x28:
    if (((int)local_c % 5 != 0) && (iVar2 = FUN_00434310(), iVar2 < 3)) {
      local_c = (5 - (int)local_c % 5) + local_c;
    }
    local_c = (int)(local_c * 6) / 5;
  }
  return local_c;
}

