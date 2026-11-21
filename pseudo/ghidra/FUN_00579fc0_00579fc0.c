// FUN_00579fc0  00579fc0

void __fastcall FUN_00579fc0(undefined4 param_1)

{
  if (DAT_0079346e == '\0') {
    FUN_00579e80(param_1);
    FUN_00579f50();
    DAT_0079346e = '\x01';
  }
  DAT_007947e0[0x13c3] = *(int *)(&DAT_0074b064 + DAT_00793570 * 0x18);
  DAT_007947e0[0x13c5] = *(int *)(&DAT_0074b068 + DAT_00793570 * 0x18);
  DAT_007947e0[0x13c4] = *(int *)(&DAT_0074b06c + DAT_00793570 * 0x18);
  (**(code **)(*DAT_007947e0 + 0x334))
            (*(undefined4 *)(&DAT_0074b058 + DAT_00793570 * 0x18),0xffffffff);
  DAT_0079346c = 1;
  return;
}

