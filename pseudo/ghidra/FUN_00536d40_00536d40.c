// FUN_00536d40  00536d40

void __fastcall FUN_00536d40(int param_1)

{
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
    *(undefined4 *)(param_1 + 100 + local_8 * 4) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_005385b0();
  return;
}

