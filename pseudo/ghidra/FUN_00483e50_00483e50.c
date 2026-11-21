// FUN_00483e50  00483e50

void __thiscall FUN_00483e50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char local_d4 [104];
  short local_6c [2];
  int aiStack_68 [5];
  short local_54;
  int local_50;
  short local_4c;
  undefined1 auStack_48 [60];
  uint local_c;
  short local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0x3dc) == 1000) {
    local_6c[0] = 1;
  }
  else if (*(int *)(param_1 + 0x3dc) == 5000) {
    local_6c[0] = 2;
  }
  else if (*(int *)(param_1 + 0x3dc) == 25000) {
    local_6c[0] = 3;
  }
  else if (*(int *)(param_1 + 0x3dc) == 50000) {
    local_6c[0] = 4;
  }
  else if (*(int *)(param_1 + 0x3dc) == 100000) {
    local_6c[0] = 5;
  }
  else {
    if (*(int *)(param_1 + 0x3dc) != 500000) goto LAB_004841fb;
    local_6c[0] = 6;
  }
  uVar1 = FUN_0047e170();
  switch(uVar1) {
  case 7:
    local_54 = 1;
    break;
  case 8:
    local_54 = 2;
    break;
  case 9:
    local_54 = 3;
    break;
  case 10:
    local_54 = 4;
    break;
  case 0xb:
    local_54 = 5;
    break;
  case 0xc:
    local_54 = 6;
    break;
  default:
    goto LAB_004841fb;
  case 0x12:
    local_54 = 9;
    break;
  case 0x14:
    local_54 = 7;
    break;
  case 0x15:
    local_54 = 8;
    break;
  case 0x17:
    local_54 = 10;
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    sprintf(local_d4,"PokerHighScore_%d_%d_%d",(int)local_54,(int)local_6c[0],local_8 + 1);
    iVar2 = FUN_00607960(local_d4,0);
    aiStack_68[local_8] = iVar2;
    sprintf(local_d4,"PokerHighName_%d_%d_%d",(int)local_54,(int)local_6c[0],local_8 + 1);
    (**(code **)(**(int **)(DAT_007960d8 + 0x14) + 0x10))
              (local_d4,"Empty",auStack_48 + local_8 * 0xc,0xc);
  }
  FUN_0047e390(param_2);
  local_50 = FUN_004c6a70();
  local_4c = 5;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    if (aiStack_68[local_8] < local_50) {
      local_4c = local_8;
      break;
    }
  }
  if (local_4c != 5) {
    sprintf(local_d4,"PokerHighScore_%d_%d_%d",(int)local_54,(int)local_6c[0],local_4c + 1);
    FUN_006079d0(local_d4,local_50);
    sprintf(local_d4,"PokerHighName_%d_%d_%d",(int)local_54,(int)local_6c[0],local_4c + 1);
    local_8 = local_4c;
    while (local_8 = local_8 + 1, local_8 < 5) {
      sprintf(local_d4,"PokerHighScore_%d_%d_%d",(int)local_54,(int)local_6c[0],local_8 + 1);
      FUN_006079d0(local_d4,*(undefined4 *)(local_6c + local_8 * 2));
      sprintf(local_d4,"PokerHighName_%d_%d_%d",(int)local_54,(int)local_6c[0],local_8 + 1);
      (**(code **)(**(int **)(DAT_007960d8 + 0x14) + 0x14))
                (local_d4,auStack_48 + (local_8 + -1) * 0xc);
    }
  }
LAB_004841fb:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

