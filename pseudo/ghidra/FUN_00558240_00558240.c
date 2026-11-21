// FUN_00558240  00558240

void __fastcall FUN_00558240(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (*(int *)(param_1 + 0x14) == 1) {
    FUN_00558c10();
    FUN_0057ab80(7,&DAT_007422a0);
    FUN_00551c70();
    FUN_005f2b20(0x1391,1);
    FUN_005f2b20(0x30f342,1);
    FUN_005f2b20(0x30f343,1);
    FUN_005f2b20(0x30f344,1);
    FUN_005f2b20(0x30f345,1);
    FUN_005f2b20(0x30f346,1);
  }
  if (*(int *)(param_1 + 0x14) == 2) {
    FUN_00558330();
    FUN_0057ab80(7,&DAT_00740a90);
    FUN_005f2ba0(0x1391);
  }
  return;
}

