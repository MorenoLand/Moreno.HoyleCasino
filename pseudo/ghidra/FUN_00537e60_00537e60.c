// FUN_00537e60  00537e60

undefined4 FUN_00537e60(undefined4 *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  char local_24;
  char local_20;
  char local_10 [4];
  int local_c;
  int local_8;
  
  local_8 = FUN_00537de0(param_1);
  for (local_c = 0; local_c < 3; local_c = local_c + 1) {
    local_10[local_c] = '\0';
  }
  switch(param_1[6]) {
  case 1:
    cVar2 = FUN_00537ac0(*param_1,param_2);
    if (cVar2 != '\0') {
      return param_1[7];
    }
    break;
  case 2:
    if (local_8 == 2) {
      cVar2 = FUN_00537bf0(*param_1,param_1[1],param_2);
      if (cVar2 != '\0') {
        return param_1[7];
      }
    }
    else if ((local_8 == 3) &&
            (cVar2 = FUN_00537c60(*param_1,param_1[1],param_1[2],param_2), cVar2 != '\0')) {
      return param_1[7];
    }
    break;
  case 3:
    cVar2 = FUN_00537b10(*param_1,param_2,0);
    if (cVar2 != '\0') {
      return param_1[7];
    }
    break;
  case 4:
    cVar2 = FUN_00537b80(*param_1,param_2,0);
    if (cVar2 != '\0') {
      return param_1[7];
    }
    break;
  case 5:
    cVar2 = FUN_00537a50(*param_1,param_1[1],param_1[2],param_2);
    if (cVar2 != '\0') {
      return param_1[7];
    }
    break;
  case 6:
    if (local_8 == 3) {
      cVar2 = FUN_00537a50(*param_1,param_1[1],param_1[2],param_2);
      if (((cVar2 != '\0') ||
          (cVar2 = FUN_00537a50(*param_1,param_1[2],param_1[1],param_2), cVar2 != '\0')) ||
         (((cVar2 = FUN_00537a50(param_1[1],*param_1,param_1[2],param_2), cVar2 != '\0' ||
           ((cVar2 = FUN_00537a50(param_1[1],param_1[2],*param_1,param_2), cVar2 != '\0' ||
            (cVar2 = FUN_00537a50(param_1[2],*param_1,param_1[1],param_2), cVar2 != '\0')))) ||
          (cVar2 = FUN_00537a50(param_1[2],param_1[1],*param_1,param_2), cVar2 != '\0')))) {
        return param_1[7];
      }
    }
    else {
      FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\slotmachinestate.cpp",0x49e);
    }
    break;
  case 7:
    local_10[0] = FUN_00537910(*param_1,0,param_2);
    local_10[1] = FUN_00537910(*param_1,1,param_2);
    local_10[2] = FUN_00537910(*param_1,2,param_2);
    if (((local_10[0] != '\0') || (local_10[1] != '\0')) || (local_10[2] != '\0')) {
      for (local_c = 0; local_c < 3; local_c = local_c + 1) {
        cVar2 = FUN_00537910(param_1[1],local_c,param_2);
        if (cVar2 != '\0') {
          return param_1[7];
        }
      }
    }
    break;
  case 8:
    local_10[0] = FUN_00537910(*param_1,0,param_2);
    local_10[1] = FUN_00537910(*param_1,1,param_2);
    local_10[2] = FUN_00537910(*param_1,2,param_2);
    if (((local_10[0] != '\0') || (local_10[1] != '\0')) || (local_10[2] != '\0')) {
      for (local_c = 0; local_c < 3; local_c = local_c + 1) {
        if (local_10[local_c] == '\0') {
          cVar2 = FUN_00537ce0(param_1[1],param_1[2],param_1[3],local_c,param_2);
          local_10[local_c] = cVar2;
        }
      }
      if (((local_10[0] != '\0') && (local_10[1] != '\0')) && (local_10[2] != '\0')) {
        return param_1[7];
      }
    }
    break;
  case 9:
    cVar2 = FUN_00537910(*param_1,0,param_2);
    if ((cVar2 == '\0') && (cVar2 = FUN_00537910(param_1[1],0,param_2), cVar2 == '\0')) {
      local_20 = '\0';
    }
    else {
      local_20 = '\x01';
    }
    local_10[0] = local_20;
    cVar2 = FUN_00537910(param_1[2],1,param_2);
    if ((cVar2 == '\0') && (cVar2 = FUN_00537910(param_1[3],1,param_2), cVar2 == '\0')) {
      local_24 = '\0';
    }
    else {
      local_24 = '\x01';
    }
    local_10[1] = local_24;
    cVar2 = FUN_00537910(param_1[4],2,param_2);
    if ((cVar2 == '\0') && (cVar2 = FUN_00537910(param_1[5],2,param_2), cVar2 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((local_10[0] != '\0') && (local_10[1] != '\0')) && (bVar1)) {
      return param_1[7];
    }
    break;
  case 10:
    cVar2 = FUN_00537910(*param_1,0,param_2);
    if (cVar2 != '\0') {
      return param_1[7];
    }
    break;
  case 0xb:
    cVar2 = FUN_00537910(*param_1,0,param_2);
    if ((cVar2 != '\0') && (cVar2 = FUN_00537910(*param_1,1,param_2), cVar2 != '\0')) {
      return param_1[7];
    }
  }
  return 0xffffffff;
}

