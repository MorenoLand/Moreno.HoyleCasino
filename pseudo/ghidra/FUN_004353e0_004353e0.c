// FUN_004353e0  004353e0

bool __thiscall FUN_004353e0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  bool local_e8;
  bool local_e4;
  bool local_e0;
  bool local_dc;
  bool local_d8;
  bool local_d4;
  bool local_d0;
  bool local_cc;
  bool local_c8;
  bool local_c4;
  bool local_c0;
  bool local_bc;
  bool local_b8;
  bool local_b4;
  bool local_b0;
  
  FUN_0064c8a0(0,0);
  uVar2 = FUN_005f5400();
  switch(uVar2) {
  case 0:
    if ((*(int *)(param_1 + 0xac4) == 0) ||
       (*(int *)(param_2 + 0x48 + *(int *)(param_1 + 0xad8) * 0x20) == 0)) {
      local_b8 = true;
    }
    else {
      local_b8 = false;
    }
    break;
  case 1:
    if ((*(int *)(param_1 + 0xac4) == 0) ||
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0), cVar1 == '\0')) {
      local_b0 = false;
      local_b8 = local_b0;
    }
    else {
      local_b0 = true;
      local_b8 = local_b0;
    }
    break;
  case 2:
    local_b8 = *(int *)(param_1 + 0xac4) == 0;
    break;
  case 3:
    if ((*(int *)(param_1 + 0xac4) == 0) ||
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),2), cVar1 == '\0')) {
      local_b4 = false;
      local_b8 = local_b4;
    }
    else {
      local_b4 = true;
      local_b8 = local_b4;
    }
    break;
  case 4:
  case 5:
    local_b8 = *(int *)(param_1 + 0xac4) != 0;
    break;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x3d:
    local_b8 = true;
    break;
  default:
    local_b8 = false;
    break;
  case 0x19:
    cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0x13);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),uVar2), cVar1 == '\0')) {
      local_bc = false;
      local_b8 = local_bc;
    }
    else {
      local_bc = true;
      local_b8 = local_bc;
    }
    break;
  case 0x1a:
    cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0x14);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),uVar2), cVar1 == '\0')) {
      local_c0 = false;
      local_b8 = local_c0;
    }
    else {
      local_c0 = true;
      local_b8 = local_c0;
    }
    break;
  case 0x1b:
    cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0x15);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),uVar2), cVar1 == '\0')) {
      local_c4 = false;
      local_b8 = local_c4;
    }
    else {
      local_c4 = true;
      local_b8 = local_c4;
    }
    break;
  case 0x1c:
    cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0x16);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),uVar2), cVar1 == '\0')) {
      local_c8 = false;
      local_b8 = local_c8;
    }
    else {
      local_c8 = true;
      local_b8 = local_c8;
    }
    break;
  case 0x1d:
    cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0x17);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),uVar2), cVar1 == '\0')) {
      local_cc = false;
      local_b8 = local_cc;
    }
    else {
      local_cc = true;
      local_b8 = local_cc;
    }
    break;
  case 0x1e:
    cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0x18);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),uVar2), cVar1 == '\0')) {
      local_d0 = false;
      local_b8 = local_d0;
    }
    else {
      local_d0 = true;
      local_b8 = local_d0;
    }
    break;
  case 0x25:
    cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0x1f);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),uVar2), cVar1 == '\0')) {
      local_d4 = false;
      local_b8 = local_d4;
    }
    else {
      local_d4 = true;
      local_b8 = local_d4;
    }
    break;
  case 0x26:
    cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0x20);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),uVar2), cVar1 == '\0')) {
      local_d8 = false;
      local_b8 = local_d8;
    }
    else {
      local_d8 = true;
      local_b8 = local_d8;
    }
    break;
  case 0x27:
    cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0x21);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),uVar2), cVar1 == '\0')) {
      local_dc = false;
      local_b8 = local_dc;
    }
    else {
      local_dc = true;
      local_b8 = local_dc;
    }
    break;
  case 0x28:
    cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0x22);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),uVar2), cVar1 == '\0')) {
      local_e0 = false;
      local_b8 = local_e0;
    }
    else {
      local_e0 = true;
      local_b8 = local_e0;
    }
    break;
  case 0x29:
    cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0x23);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),uVar2), cVar1 == '\0')) {
      local_e4 = false;
      local_b8 = local_e4;
    }
    else {
      local_e4 = true;
      local_b8 = local_e4;
    }
    break;
  case 0x2a:
    cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),0x24);
    if ((cVar1 == '\0') &&
       (cVar1 = FUN_004369a0(*(undefined4 *)(param_1 + 0xad8),uVar2), cVar1 == '\0')) {
      local_e8 = false;
      local_b8 = local_e8;
    }
    else {
      local_e8 = true;
      local_b8 = local_e8;
    }
    break;
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
    cVar1 = FUN_00434410();
    if ((cVar1 == '\0') && (*(int *)(param_1 + 0xac4) == 0)) {
      local_b8 = false;
    }
    else {
      local_b8 = true;
    }
  }
  return local_b8;
}

