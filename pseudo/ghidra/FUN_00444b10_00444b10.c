// FUN_00444b10  00444b10

void __fastcall FUN_00444b10(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  *(undefined1 *)(param_1 + 0x25d) = 0;
  *(undefined1 *)(param_1 + 0x25c) = 0;
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 4 + local_8 * 0x78) = 0xffffffff;
    strcpy((char *)(param_1 + 8 + local_8 * 0x78),(char *)&PTR_006b27f8);
    *(undefined4 *)(param_1 + 0x3c + local_8 * 0x78) = 0;
    *(undefined4 *)(param_1 + 0x40 + local_8 * 0x78) = 0;
    *(undefined4 *)(param_1 + 0x44 + local_8 * 0x78) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x48 + local_8 * 0x78) = 0;
    *(undefined4 *)(param_1 + 0x4c + local_8 * 0x78) = 0xffffffff;
    for (local_c = 0; local_c < 3; local_c = local_c + 1) {
      *(undefined4 *)(param_1 + local_8 * 0x78 + 0x50 + local_c * 8) = 0;
      *(undefined4 *)(param_1 + local_8 * 0x78 + 0x54 + local_c * 8) = 1;
    }
    *(undefined4 *)(param_1 + 0x68 + local_8 * 0x78) = 0;
    *(undefined4 *)(param_1 + 0x6c + local_8 * 0x78) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x70 + local_8 * 0x78) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x74 + local_8 * 0x78) = 0;
    *(undefined1 *)(param_1 + 0x78 + local_8 * 0x78) = 0;
  }
  FUN_00444f40();
  *(undefined1 *)(param_1 + 0x25e) = 1;
  cVar1 = FUN_00444cb0();
  if (cVar1 != '\0') {
    uVar2 = FUN_005dcb00(0);
    FUN_005dbb70(uVar2);
  }
  return;
}

