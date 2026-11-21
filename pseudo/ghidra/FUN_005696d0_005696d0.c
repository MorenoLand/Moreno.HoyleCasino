// FUN_005696d0  005696d0

void __fastcall FUN_005696d0(int param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (*(int *)(param_1 + 0x14) == 1) {
    FUN_00569fe0();
    FUN_0057ab80(7,&DAT_00746c70);
    FUN_0055ef80();
    FUN_005f2b20(0x1391,1);
    FUN_00561d10(1);
    FUN_00561d40(1);
  }
  if (*(int *)(param_1 + 0x14) == 2) {
    FUN_00569780();
    FUN_0057ab80(7,&DAT_00745460);
    FUN_005f2ba0(0x1391);
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  return;
}

