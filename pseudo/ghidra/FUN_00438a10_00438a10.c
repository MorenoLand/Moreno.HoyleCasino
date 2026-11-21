// FUN_00438a10  00438a10

uint __thiscall FUN_00438a10(int param_1,undefined4 param_2)

{
  char cVar1;
  uint local_8;
  
  local_8 = 0xffffffff;
  cVar1 = FUN_00438870(param_2);
  if ((cVar1 == '\0') || (cVar1 = FUN_00438900(param_2), cVar1 != '\0')) {
    switch(param_2) {
    case 0:
      cVar1 = FUN_00437150();
      if ((cVar1 != '\0') || (cVar1 = FUN_00437200(), cVar1 != '\0')) {
        local_8 = 1;
      }
      cVar1 = FUN_00437250();
      if ((cVar1 != '\0') || (cVar1 = FUN_00437340(), cVar1 != '\0')) {
        local_8 = 0;
      }
      break;
    case 1:
      cVar1 = FUN_00437200();
      if (cVar1 != '\0') {
        local_8 = 1;
      }
      cVar1 = FUN_00437340();
      if (cVar1 != '\0') {
        local_8 = 0;
      }
      break;
    case 2:
      cVar1 = FUN_00437150();
      if ((cVar1 != '\0') || (cVar1 = FUN_00437200(), cVar1 != '\0')) {
        local_8 = 0;
      }
      cVar1 = FUN_00437250();
      if (((cVar1 != '\0') && (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) != 0xc)) ||
         (cVar1 = FUN_00437340(), cVar1 != '\0')) {
        local_8 = 1;
      }
      break;
    case 3:
      cVar1 = FUN_00437340();
      if (cVar1 != '\0') {
        local_8 = 1;
      }
      cVar1 = FUN_00437200();
      if (cVar1 != '\0') {
        local_8 = 0;
      }
      break;
    case 4:
      if (*(int *)(param_1 + 0xac4) != 0) {
        if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 0xb)) {
          local_8 = 1;
        }
        else if (((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 2) ||
                 (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 3)) ||
                (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 0xc)) {
          local_8 = 0;
        }
      }
      break;
    case 5:
      if (*(int *)(param_1 + 0xac4) != 0) {
        if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 0xc) {
          local_8 = 0xffffffff;
        }
        else if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) ||
                (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 0xb)) {
          local_8 = 0;
        }
        else if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 2) ||
                (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 3)) {
          local_8 = 1;
        }
      }
      break;
    case 6:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 6) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 0;
      }
      break;
    case 7:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 8) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 0;
      }
      break;
    case 8:
      if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 4) &&
         (*(int *)(param_1 + 0xacc) == *(int *)(param_1 + 0xad0))) {
        local_8 = 1;
      }
      else if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) ||
              (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 4)) {
        local_8 = 0;
      }
      break;
    case 9:
      if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 6) &&
         (*(int *)(param_1 + 0xacc) == *(int *)(param_1 + 0xad0))) {
        local_8 = 1;
      }
      else if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) ||
              (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 6)) {
        local_8 = 0;
      }
      break;
    case 10:
      if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 8) &&
         (*(int *)(param_1 + 0xacc) == *(int *)(param_1 + 0xad0))) {
        local_8 = 1;
      }
      else if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) ||
              (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 8)) {
        local_8 = 0;
      }
      break;
    case 0xb:
      if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 10) &&
         (*(int *)(param_1 + 0xacc) == *(int *)(param_1 + 0xad0))) {
        local_8 = 1;
      }
      else if ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) ||
              (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 10)) {
        local_8 = 0;
      }
      break;
    case 0xc:
      local_8 = (uint)(*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 2);
      break;
    case 0xd:
      local_8 = (uint)(*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 3);
      break;
    case 0xe:
      local_8 = (uint)(*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 0xb);
      break;
    case 0xf:
      local_8 = (uint)(*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 0xc);
      break;
    case 0x10:
      local_8 = (uint)(*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7);
      break;
    case 0x11:
      if (((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 2) ||
          (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 3)) ||
         (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 0xc)) {
        local_8 = 1;
      }
      else {
        local_8 = 0;
      }
      break;
    case 0x12:
      if ((((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 2) ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 3)) ||
          (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 0xb)) ||
         (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 0xc)) {
        local_8 = 1;
      }
      else {
        local_8 = 0;
      }
      break;
    case 0x19:
      if (((*(int *)(param_1 + 0xac4) == 0) &&
          ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7 ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 4)))) &&
         (cVar1 = FUN_00438900(param_2), cVar1 == '\0')) {
        return 3;
      }
    case 0x13:
    case 0x2b:
    case 0x31:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 4) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 0;
      }
      break;
    case 0x1a:
      if (((*(int *)(param_1 + 0xac4) == 0) &&
          ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7 ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 5)))) &&
         (cVar1 = FUN_00438900(param_2), cVar1 == '\0')) {
        return 3;
      }
    case 0x14:
    case 0x2c:
    case 0x32:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 5) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 0;
      }
      break;
    case 0x1b:
      if ((*(int *)(param_1 + 0xac4) == 0) &&
         (((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7 ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 6)) &&
          (cVar1 = FUN_00438900(param_2), cVar1 == '\0')))) {
        return 3;
      }
    case 0x15:
    case 0x2d:
    case 0x33:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 6) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 0;
      }
      break;
    case 0x1c:
      if (((*(int *)(param_1 + 0xac4) == 0) &&
          ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7 ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 8)))) &&
         (cVar1 = FUN_00438900(param_2), cVar1 == '\0')) {
        return 3;
      }
    case 0x16:
    case 0x2e:
    case 0x34:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 8) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 0;
      }
      break;
    case 0x1d:
      if (((*(int *)(param_1 + 0xac4) == 0) &&
          ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7 ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 9)))) &&
         (cVar1 = FUN_00438900(param_2), cVar1 == '\0')) {
        return 3;
      }
    case 0x17:
    case 0x2f:
    case 0x35:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 9) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 0;
      }
      break;
    case 0x1e:
      if ((*(int *)(param_1 + 0xac4) == 0) &&
         (((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7 ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 10)) &&
          (cVar1 = FUN_00438900(param_2), cVar1 == '\0')))) {
        return 3;
      }
    case 0x18:
    case 0x30:
    case 0x36:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 10) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 0;
      }
      break;
    case 0x25:
      if (((*(int *)(param_1 + 0xac4) == 0) &&
          ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7 ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 4)))) &&
         (cVar1 = FUN_00434410(), cVar1 == '\0')) {
        return 3;
      }
    case 0x1f:
    case 0x37:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 4) {
        local_8 = 0;
      }
      break;
    case 0x26:
      if (((*(int *)(param_1 + 0xac4) == 0) &&
          ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7 ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 5)))) &&
         (cVar1 = FUN_00434410(), cVar1 == '\0')) {
        return 3;
      }
    case 0x20:
    case 0x38:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 5) {
        local_8 = 0;
      }
      break;
    case 0x27:
      if ((*(int *)(param_1 + 0xac4) == 0) &&
         (((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7 ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 6)) &&
          (cVar1 = FUN_00434410(), cVar1 == '\0')))) {
        return 3;
      }
    case 0x21:
    case 0x39:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 6) {
        local_8 = 0;
      }
      break;
    case 0x28:
      if (((*(int *)(param_1 + 0xac4) == 0) &&
          ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7 ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 8)))) &&
         (cVar1 = FUN_00434410(), cVar1 == '\0')) {
        return 3;
      }
    case 0x22:
    case 0x3a:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 8) {
        local_8 = 0;
      }
      break;
    case 0x29:
      if (((*(int *)(param_1 + 0xac4) == 0) &&
          ((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7 ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 9)))) &&
         (cVar1 = FUN_00434410(), cVar1 == '\0')) {
        return 3;
      }
    case 0x23:
    case 0x3b:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 9) {
        local_8 = 0;
      }
      break;
    case 0x2a:
      if ((*(int *)(param_1 + 0xac4) == 0) &&
         (((*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7 ||
           (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 10)) &&
          (cVar1 = FUN_00434410(), cVar1 == '\0')))) {
        return 3;
      }
    case 0x24:
    case 0x3c:
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 7) {
        local_8 = 1;
      }
      if (*(int *)(param_1 + 0xacc) + *(int *)(param_1 + 0xad0) == 10) {
        local_8 = 0;
      }
      break;
    case 0x3d:
      cVar1 = FUN_00438990();
      if (cVar1 == '\0') {
        local_8 = 0;
      }
      else {
        local_8 = 1;
      }
    }
  }
  else {
    local_8 = 0xffffffff;
  }
  return local_8;
}

