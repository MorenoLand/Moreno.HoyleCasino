// FUN_00630a90  00630a90

void FUN_00630a90(undefined4 param_1,char param_2,char param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  undefined1 local_34 [4];
  undefined1 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  char local_20;
  undefined4 local_1c;
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ab8a4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006101f0(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if ((param_2 < '\0') || ('\x1a' < param_2)) {
    local_18 = 0;
  }
  else {
    local_18 = 2;
  }
  cVar1 = FUN_005e9e60();
  if (cVar1 != '\0') {
    local_18 = local_18 | 2;
  }
  cVar1 = FUN_005e9e80();
  if (cVar1 != '\0') {
    local_18 = local_18 | 1;
  }
  cVar1 = FUN_005e9ec0();
  if (cVar1 != '\0') {
    local_18 = local_18 | 4;
  }
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  uVar2 = local_18 | 0x40;
  switch(param_2) {
  case '\b':
    param_2 = '\x16';
    local_18 = uVar2;
    break;
  default:
    param_2 = '\0';
    local_18 = local_18 & 0xffffffbf;
    break;
  case '!':
    param_2 = '\a';
    local_18 = uVar2;
    break;
  case '\"':
    param_2 = '\b';
    local_18 = uVar2;
    break;
  case '#':
    param_2 = '\x06';
    local_18 = uVar2;
    break;
  case '$':
    param_2 = '\x05';
    local_18 = uVar2;
    break;
  case '%':
    param_2 = '\x03';
    local_18 = uVar2;
    break;
  case '&':
    param_2 = '\x01';
    local_18 = uVar2;
    break;
  case '\'':
    param_2 = '\x04';
    local_18 = uVar2;
    break;
  case '(':
    param_2 = '\x02';
    local_18 = uVar2;
    break;
  case '.':
    param_2 = '\x17';
    local_18 = uVar2;
  }
  if (param_2 != '\0') {
    local_20 = param_2;
    if (param_3 == '\0') {
      if (param_4 == '\0') {
        local_1c = 4;
      }
      else {
        local_1c = 0x16;
      }
    }
    else {
      local_1c = 0x15;
    }
    local_14 = FUN_005f4070(0,0,param_1);
    if (local_14 != 0) {
      (**(code **)(*DAT_0162ee84 + 0xc))(local_34);
    }
  }
  local_8 = 0xffffffff;
  FUN_00610250();
  ExceptionList = local_10;
  return;
}

