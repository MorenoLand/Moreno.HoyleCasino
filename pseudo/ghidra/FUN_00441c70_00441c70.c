// FUN_00441c70  00441c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00441c70(int param_1)

{
  char cVar1;
  
  FUN_006044b0(0x20564157,0x18aa6,0);
  FUN_006044b0(0x20564157,0x18aa7,0);
  FUN_006044b0(0x20564157,0x18aa9,0);
  FUN_006044b0(0x20564157,0x18aa8,0);
  *(undefined1 *)(DAT_007906f0 + 0x25d) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_00441600();
  FUN_0043d2a0();
  (**(code **)(**(int **)(DAT_007906ec + 4) + 4))(3);
  FUN_0043d390();
  cVar1 = FUN_00444ac0();
  if (cVar1 == '\0') {
    (**(code **)(*DAT_0162ee84 + 0x80))
              (0x18aa6,*(undefined4 *)(DAT_007906ec + 4),0,5,1,0x3f800000,_DAT_006b3654,0);
  }
  return;
}

