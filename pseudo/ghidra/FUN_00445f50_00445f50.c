// FUN_00445f50  00445f50

void __fastcall FUN_00445f50(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    FUN_00444d00(local_8,0xffffffff);
    *(undefined4 *)(param_1 + 0x3c + local_8 * 0x78) = 0;
    FUN_005fb3a0(local_8);
    FUN_006067e0();
  }
  FUN_00440200();
  FUN_00440260();
  FUN_00440310();
  FUN_0043fe60();
  FUN_00440490();
  return;
}

