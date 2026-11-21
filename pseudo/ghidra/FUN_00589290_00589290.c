// FUN_00589290  00589290

void __fastcall FUN_00589290(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_248;
  char local_240;
  char local_23f;
  char local_23e;
  char local_23d;
  char local_23c;
  char acStack_23b [23];
  int local_224;
  int local_220;
  char local_21c [260];
  undefined8 local_118;
  int local_110;
  char local_10c [260];
  uint local_8;
  
  local_8 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_118 = FUN_0064c8a0(0,0);
  puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x3b68) + 4);
  pcVar3 = &local_240;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pcVar3 = *puVar7;
    puVar7 = puVar7 + 1;
    pcVar3 = pcVar3 + 4;
  }
  switch(local_240) {
  case '\0':
    piVar4 = (int *)FUN_005fb5e0(1);
    (**(code **)(*piVar4 + 0xf0))(0x30dfc1,0);
    break;
  case '\x01':
    piVar4 = (int *)FUN_005fb5e0(1);
    (**(code **)(*piVar4 + 0xf0))(0x30dfc2,0);
    break;
  case '\x02':
    piVar4 = (int *)FUN_005fb5e0(1);
    (**(code **)(*piVar4 + 0xf0))(0x30dfc3,0);
    break;
  case '\x03':
    piVar4 = (int *)FUN_005fb5e0(1);
    (**(code **)(*piVar4 + 0xf0))(0x30dfc4,0);
    break;
  case '\x04':
    piVar4 = (int *)FUN_005fb5e0(1);
    (**(code **)(*piVar4 + 0xf0))(0x30dfc5,0);
    break;
  case '\x05':
    piVar4 = (int *)FUN_005fb5e0(1);
    (**(code **)(*piVar4 + 0xf0))(0x30dfc6,0);
    break;
  case '\x06':
    piVar4 = (int *)FUN_005fb5e0(1);
    (**(code **)(*piVar4 + 0xf0))(0x30dfc7,0);
  }
  for (local_110 = 0; local_110 < 0x50; local_110 = local_110 + 1) {
    (**(code **)(**(int **)(param_1 + 0x1bc + local_110 * 4) + 0xf8))();
  }
  if (*(int *)(param_1 + 0x3bf4 + *(int *)(param_1 + 0x3c08) * 4) == 0) {
    sprintf(local_21c,"%d/%d",*(int *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4) + 1,1);
  }
  else {
    sprintf(local_21c,"%d/%d",*(int *)(param_1 + 0x3be4 + *(int *)(param_1 + 0x3c08) * 4) + 1,
            *(undefined4 *)(param_1 + 0x3bf4 + *(int *)(param_1 + 0x3c08) * 4));
  }
  (**(code **)(**(int **)(param_1 + 0x3b84) + 0xb4))(local_21c);
  if (local_224 == 0) {
    (**(code **)(**(int **)(param_1 + 0x3b90) + 0xb4))(&PTR_006b27f8);
  }
  else {
    sprintf(local_21c,"%04d",local_224);
    if ('\x01' < local_23e) {
      local_248 = local_224 + -1 + (int)local_23e;
      if (1000 < local_248) {
        local_248 = local_248 + -1000;
      }
      sprintf(local_10c,"-%04d",local_248);
      strcat(local_21c,local_10c);
    }
    (**(code **)(**(int **)(param_1 + 0x3b90) + 0xb4))(local_21c);
  }
  if (local_23c == '\0') {
    (**(code **)(**(int **)(param_1 + 0x3ba0) + 0x70))();
  }
  else {
    if (-(int)local_23f * (int)local_23e < local_220) {
      FUN_005eaf00(0x30dfc2);
      (**(code **)(**(int **)(param_1 + 0x3ba0) + 0x44))(0x14,0x69);
    }
    else {
      FUN_005eaf00(0x30dfc1);
      (**(code **)(**(int **)(param_1 + 0x3ba0) + 0x44))(0x14,0x69);
    }
    (**(code **)(**(int **)(param_1 + 0x3ba0) + 0x74))();
  }
  if (local_240 < '\x04') {
    for (local_110 = 0; local_110 < 0x14; local_110 = local_110 + 1) {
      if ((acStack_23b[local_110] < '\x01') || ('P' < acStack_23b[local_110])) {
        if (acStack_23b[local_110] != '\0') {
          FUN_005e9f20(&DAT_006b2b64,"..\\Casino\\kenoticketdialog.cpp",0x3ed);
        }
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x1b8 + acStack_23b[local_110] * 4) + 0xf4))();
      }
    }
    iVar6 = FUN_0058a470();
    if (iVar6 == 0) {
      (**(code **)(**(int **)(param_1 + 0x3b8c) + 0xb4))(&PTR_006b27f8);
    }
    else {
      iVar6 = FUN_0058a470();
      if (iVar6 < 10) {
        (**(code **)(**(int **)(param_1 + 0x3b8c) + 0x44))(0x11,0x37);
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x3b8c) + 0x44))(7,0x37);
      }
      uVar2 = FUN_0058a470();
      sprintf(local_21c,"%d",uVar2);
      (**(code **)(**(int **)(param_1 + 0x3b8c) + 0xb4))(local_21c);
    }
    (**(code **)(**(int **)(param_1 + 0x3b9c) + 0x70))();
  }
  else {
    if (local_240 == '\x04') {
      (**(code **)(**(int **)(param_1 + 0x3b9c) + 0xb0))(2);
    }
    else if (local_240 == '\x05') {
      (**(code **)(**(int **)(param_1 + 0x3b9c) + 0xb0))(0);
    }
    else if (local_240 == '\x06') {
      (**(code **)(**(int **)(param_1 + 0x3b9c) + 0xb0))(1);
    }
    (**(code **)(**(int **)(param_1 + 0x3b8c) + 0xb4))(&PTR_006b27f8);
    (**(code **)(**(int **)(param_1 + 0x3b9c) + 0x74))();
    if (local_240 == '\x04') {
      for (local_110 = 1; local_110 < 0xb; local_110 = local_110 + 1) {
        (**(code **)(**(int **)(param_1 + 0x1b8 + local_110 * 4) + 0xf4))();
      }
      for (local_110 = 0x47; local_110 < 0x51; local_110 = local_110 + 1) {
        (**(code **)(**(int **)(param_1 + 0x1b8 + local_110 * 4) + 0xf4))();
      }
      for (local_110 = 0xb; local_110 < 0x3e; local_110 = local_110 + 10) {
        (**(code **)(**(int **)(param_1 + 0x1b8 + local_110 * 4) + 0xf4))();
      }
      for (local_110 = 0x14; local_110 < 0x47; local_110 = local_110 + 10) {
        (**(code **)(**(int **)(param_1 + 0x1b8 + local_110 * 4) + 0xf4))();
      }
    }
  }
  iVar6 = FUN_0058a470();
  if (iVar6 < 4) {
LAB_00589c08:
    (**(code **)(**(int **)(param_1 + 0x310) + 0xf8))();
  }
  else {
    iVar6 = FUN_0058a470();
    if (6 < iVar6) goto LAB_00589c08;
    if (local_23d == '\0') {
      (**(code **)(**(int **)(param_1 + 0x310) + 0xf8))();
    }
    else {
      (**(code **)(**(int **)(param_1 + 0x310) + 0xf4))();
    }
  }
  iVar6 = FUN_0058a470();
  if (iVar6 == 0x14) {
    if (local_23f == '\x05') {
      FUN_0058dc30(1);
    }
    else {
      FUN_0058dc30(0);
    }
  }
  else {
    switch(local_23f) {
    case '\x01':
    case '\x02':
    case '\a':
      FUN_0058dc30(3);
      break;
    case '\x05':
    case '\x0e':
      FUN_0058dc30(2);
      break;
    case '\n':
    case '\x1c':
      FUN_0058dc30(1);
      break;
    case '\x14':
    case 'F':
      FUN_0058dc30(0);
    }
  }
  sprintf(local_21c,"$%d",(int)local_23f);
  FUN_0058d840(local_21c);
  if (local_23e == '\0') {
    (**(code **)(**(int **)(param_1 + 800) + 0xb4))(&PTR_006b27f8);
  }
  else {
    sprintf(local_21c,"%d",(int)local_23e);
    (**(code **)(**(int **)(param_1 + 800) + 0xb4))(local_21c);
  }
  if (local_224 == 0) {
    uVar2 = FUN_00630f40("SID_KENO_NET_COLON");
    (**(code **)(**(int **)(param_1 + 0x3b88) + 0xb4))(uVar2);
  }
  else {
    if (local_220 < 0) {
      pcVar3 = (char *)FUN_00630f40("SID_KENO_NETNEGATIVE_FORMAT",-local_220);
      sprintf(local_21c,pcVar3);
    }
    else {
      pcVar3 = (char *)FUN_00630f40("SID_KENO_NETPOSITIVE_FORMAT",local_220);
      sprintf(local_21c,pcVar3);
    }
    (**(code **)(**(int **)(param_1 + 0x3b88) + 0xb4))(local_21c);
  }
  sprintf(local_21c,"$%d",(int)local_23f * (int)local_23e);
  (**(code **)(**(int **)(param_1 + 0x3b94) + 0xb4))(local_21c);
  cVar1 = FUN_00585eb0();
  if (cVar1 == '\0') {
    for (local_110 = 0; local_110 < 0x50; local_110 = local_110 + 1) {
      (**(code **)(**(int **)(param_1 + 0x1bc + local_110 * 4) + 0xd0))();
    }
    FUN_0060c330();
    piVar4 = (int *)FUN_005fb5e0(1);
    (**(code **)(*piVar4 + 0xd0))();
    (**(code **)(**(int **)(param_1 + 0x310) + 0xd0))();
    FUN_0058def0();
  }
  else {
    for (local_110 = 0; local_110 < 0x50; local_110 = local_110 + 1) {
      (**(code **)(**(int **)(param_1 + 0x1bc + local_110 * 4) + 0xcc))();
    }
    FUN_0060c300();
    piVar4 = (int *)FUN_005fb5e0(1);
    (**(code **)(*piVar4 + 0xcc))();
    iVar6 = FUN_0058a470();
    if (iVar6 < 4) {
LAB_00589faf:
      (**(code **)(**(int **)(param_1 + 0x310) + 0xd0))();
    }
    else {
      iVar6 = FUN_0058a470();
      if (6 < iVar6) goto LAB_00589faf;
      (**(code **)(**(int **)(param_1 + 0x310) + 0xcc))();
    }
    if (local_240 < '\x04') {
      FUN_0058dce0();
    }
    else {
      FUN_0058def0();
    }
  }
  pcVar3 = (char *)FUN_00630f40("SID_KENO_BANK_COLON");
  strcpy(local_10c,pcVar3);
  FUN_005de230(param_1 + 0x3ba4 + *(int *)(param_1 + 0x3c08) * 0x10,&local_118);
  FUN_0064c8d0(local_118,local_21c,1,1,1);
  strcat(local_10c,local_21c);
  (**(code **)(**(int **)(param_1 + 0x3b98) + 0xb4))(local_10c);
  (**(code **)(**(int **)(param_1 + 0x3b98) + 0x74))();
  FUN_0058a380();
  FUN_0058f530(*(undefined4 *)(*(int *)(param_1 + 0x3b68) + 4));
  iVar6 = FUN_00588a80();
  if (iVar6 == 0) {
    FUN_005f2ba0(0x30dfc0);
  }
  else {
    FUN_005f2b20(0x30dfc0,1);
  }
  iVar6 = FUN_0058a470();
  iVar5 = FUN_005fb5e0(1);
  if ((*(int *)(iVar5 + 0x1f0) != 0x30dfc4) || (iVar6 == 0x14)) {
    iVar5 = FUN_005fb5e0(1);
    if ((*(int *)(iVar5 + 0x1f0) != 0x30dfc3) || (iVar6 == 10)) {
      iVar5 = FUN_005fb5e0(1);
      if ((*(int *)(iVar5 + 0x1f0) != 0x30dfc2) || (iVar6 == 5)) goto LAB_0058a2f8;
    }
  }
  piVar4 = (int *)FUN_005fb5e0(1);
  (**(code **)(*piVar4 + 0xf0))(0x30dfc1,0);
  **(undefined1 **)(*(int *)(param_1 + 0x3b68) + 4) = 0;
LAB_0058a2f8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

