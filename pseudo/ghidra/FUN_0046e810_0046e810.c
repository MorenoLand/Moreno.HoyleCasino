// FUN_0046e810  0046e810

undefined4 FUN_0046e810(char param_1,undefined2 param_2,short param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  short local_8;
  
  local_8 = FUN_004e0180(param_2);
  if ((param_1 == '\0') && (cVar1 = FUN_004f6640(), cVar1 != '\0')) {
    iVar3 = (100 - local_8) / 2;
    local_8 = local_8 + (short)iVar3;
  }
  else if (param_1 == '\0') {
    uVar4 = FUN_004c7050();
    sVar2 = FUN_004f6880(uVar4);
    param_3 = sVar2 + -2 + param_3;
    if (param_3 == 1) {
      iVar3 = ((int)local_8 << 1) / 3;
      local_8 = (short)iVar3;
    }
    else if (param_3 == 2) {
      iVar3 = (int)local_8 / 2;
      local_8 = (short)iVar3;
    }
    else {
      iVar3 = (int)param_3;
      if (iVar3 == 3) {
        iVar3 = (int)local_8 / 3;
        local_8 = (short)iVar3;
      }
      else if (3 < param_3) {
        iVar3 = (int)((int)local_8 + ((int)local_8 >> 0x1f & 3U)) >> 2;
        local_8 = (short)iVar3;
      }
    }
  }
  else {
    uVar4 = FUN_004c7050();
    sVar2 = FUN_004f6880(uVar4);
    param_3 = sVar2 + -2 + param_3;
    if (param_3 == 2) {
      iVar3 = ((int)local_8 << 1) / 3;
      local_8 = (short)iVar3;
    }
    else if (param_3 == 3) {
      iVar3 = (int)local_8 / 2;
      local_8 = (short)iVar3;
    }
    else {
      iVar3 = (int)param_3;
      if (3 < iVar3) {
        iVar3 = (int)local_8 / 3;
        local_8 = (short)iVar3;
      }
    }
  }
  return CONCAT22((short)((uint)iVar3 >> 0x10),local_8);
}

