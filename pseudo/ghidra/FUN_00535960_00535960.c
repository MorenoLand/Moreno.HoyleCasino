// FUN_00535960  00535960

void __fastcall FUN_00535960(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int local_c;
  int local_8;
  
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    for (local_c = 0; local_c < 0x16; local_c = local_c + 1) {
      *(undefined1 *)(param_1 + 0x15 + local_8 * 0x16 + local_c) = 0xff;
    }
  }
  for (local_8 = 0; local_8 < 3; local_8 = local_8 + 1) {
    local_c = 0;
    while( true ) {
      iVar3 = FUN_00538510();
      if (iVar3 <= local_c) break;
      uVar1 = (**(code **)(*DAT_00793394 + 0x58))(local_8,local_c);
      *(undefined1 *)(param_1 + 0x15 + local_8 * 0x16 + local_c) = uVar1;
      local_c = local_c + 1;
    }
  }
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 100 + local_8 * 4) = 0xffffffff;
  }
  FUN_00536730();
  cVar2 = FUN_005df700(0xffffffff);
  if (cVar2 == '\0') {
    FUN_0057ae30();
  }
  else {
    FUN_0057ab80(5,&DAT_007293c0);
  }
  return;
}

